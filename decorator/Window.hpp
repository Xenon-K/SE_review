#ifndef WINDOW_H
#define WINDOW_H

class Window {
  public:
    virtual void draw() = 0;
    virtual std::string getDescription() = 0;
};

#endif
