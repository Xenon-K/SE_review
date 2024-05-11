#ifndef TOY_H
#define TOY_H
#include <iostream>
#include "I.hpp"

using namespace std;

class Toy:public I {
  public:
    void play() {
        cout << "play ";
    }
};

#endif
