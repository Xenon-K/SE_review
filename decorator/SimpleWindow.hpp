#ifndef SIMPLEWINDOW_H
#define SIMPLEWINDOW_H
#include <iostream>
#include "Window.hpp"

using namespace std;

class SimpleWindow:public Window {
  public:
  void draw(){
   cout << "Drawing: Simple Window" << endl; 
  }
  std::string getDescription()
  {
  cout << "Description: Simple Window" << endl;
  }
};

#endif
