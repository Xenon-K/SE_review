#include "Cheese.h"

using namespace std;

int main()
{
	Cheese *cheese[3];
	cheese[0] = Cheese::makeCheese("cheddar");
	cheese[1] = Cheese::makeCheese("feta");
	cheese[2] = Cheese::makeCheese("swiss");

    cheese[0]->addLabel("static");
    cheese[1]->addLabel("static");
    cheese[2]->addLabel("static");

	cheese[0]->taste();
	cheese[1]->taste();
	cheese[2]->taste();
	return 0;
}
