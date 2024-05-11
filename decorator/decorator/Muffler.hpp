#ifndef MUFFLER_H
#define MUFFLER_H
#include <iostream>
#include "I.hpp"

using namespace std;

class Muffler:public I {
  public:
    Muffler(I *toy) { this->toy = toy; }
    void play() {
        toy->play();
        cout << "quietly ";
    }
  private:
    I* toy;
};

#endif
