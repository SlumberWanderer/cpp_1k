#pragma once

#include <iostream>
#include <cmath>
using namespace std;

class Point3D {
private:
   double x, y, z;

public:
   Point3D(double x, double y, double z) : x(x), y(y), z(z) {} 

   double getX() const { return x; }
   double getY() const { return y; }
   double getZ() const { return z; }

   void setX(double val) { x = val; }
   void setY(double val) { y = val; }
   void setZ(double val) { z = val; }

   double distance(const Point3D& other) const {
      double dx = other.x - this->x;
      double dy = other.y - this->y;
      double dz = other.z - this->z;

      return sqrt(dx*dx + dy*dy + dz*dz);
   }


};