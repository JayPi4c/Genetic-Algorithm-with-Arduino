#include "Ship.h"

Ship::Ship(double x_, double y_){
  x = x_;
  y = y_;
}

Ship::~Ship(){
}

double Ship::getX(){
  return x;
}

void Ship::setX(double x_){
  x = x_;
}

double Ship::getY(){
  return y;
}

void Ship::setY(double y_){
  y = y_;
}
