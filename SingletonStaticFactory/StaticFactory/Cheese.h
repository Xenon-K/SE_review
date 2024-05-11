#ifndef CHEESE_H
#define CHEESE_H
#include <iostream>
#include <string>

using namespace std;

class Cheese
{
	public:
		Cheese()
		{
			label = "";
			cout << "Create Cheese." << endl;
		}
		void addLabel(string l)
		{
			label = l;
		}
		virtual void taste() = 0;
        static Cheese* makeCheese(string name);

protected:
		string name;
		string label;
};

class SwissCheese: public Cheese
{
    public:
        SwissCheese()
        {
            cout << "Create SwissCheese." << endl;
            name = "SwissCheese";
        }
        virtual void taste();
};

void SwissCheese::taste()
{
    cout << "It tastes like a " + label + " Swiss Cheese." << endl;
}

class FetaCheese: public Cheese
{
    public:
        FetaCheese()
        {
            cout << "Create FetaCheese." << endl;
            name = "FetaCheese";
        }
        virtual void taste();
};

void FetaCheese::taste()
{
    cout << "It tastes like a " + label + " Feta Cheese." << endl;
}

class CheddarCheese: public Cheese
{
    public:
        CheddarCheese()
        {
            cout << "Create CheddarCheese." << endl;
            name = "CheddarCheese";
        }
        virtual void taste();
};

void CheddarCheese::taste()
{
    cout << "It tastes like a " + label + " Cheddar Cheese." << endl;
}

Cheese* Cheese::makeCheese(string name)
{
    Cheese* cheese;
    if(name == "cheddar") {
        cheese = new CheddarCheese();
    } else if(name == "feta") {
        cheese = new FetaCheese();
    } else if(name == "swiss") {
        cheese = new SwissCheese();
    } else {
        cout << "We do not have this kind of cheese" << endl;
        cheese = NULL;
    }
    return cheese;
}

#endif
