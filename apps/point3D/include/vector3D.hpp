#pragma once

#include <iostream>
#include <cmath>
using namespace std;

class Vector3D {
private:
   double x, y, z;

public:
   Vector3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

   double getX() const { return x; }
   double getY() const { return y; }
   double getZ() const { return z; }

   void setX(double val) { x = val; }
   void setY(double val) { y = val; }
   void setZ(double val) { z = val; }

   double dotproduct(const Vector3D& other) const {
      return (this->x * other.x) + (this->y * other.y) + (this->z * other.z);
   }

   Vector3D crossproduct(const Vector3D& other) const {
      double dx = (this->y * other.z) - (this->z * other.y);
      double dy = (this->z * other.x) - (this->x * other.z);
      double dz = (this->x * other.y) - (this->y * other.x);

      return Vector3D(dx, dy, dz);
   }


};

