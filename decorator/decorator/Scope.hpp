#ifndef SCOPE_H
#define SCOPE_H
#include <iostream>
#include "I.hpp"

using namespace std;

class Scope:public I {
  public:
    Scope(I *toy) { this->toy = toy; }
    void play() {
        toy->play();
        cout << "accurately ";
    }
  private:
    I* toy;
};

#endif



