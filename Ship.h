#ifndef Ship_h
#define Ship_h
#include "Arduino.h"
#include "DNA.h"

class Ship{
  public:
    Ship(double x_, double y_);
    ~Ship();
  
  double x;
  double y;
  
  void setX(double x_);
  double getX();
  void setY(double y_);
  double getY();
};

#endif
