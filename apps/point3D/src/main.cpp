#include "app.hpp"

int main() {

    Point3D p1(0, 0, 0);
    Point3D p2(3, 4, 0);

    cout << "Point 1: (" << p1.getX() << "," << p1.getY() << "," << p1.getZ() << ")" << endl;
    
    double dist = p1.distance(p2);

    cout << "Distance to p2: " << dist << endl;

    p1.setZ(12);

    cout << "Point 1 Z: " << p1.getZ() << endl;

    cout << "New distance: " << p1.distance(p2) << endl;
    
    Vector3D v1(1, 0 , 0);
    Vector3D v2(0, 1, 0);

    double dot = v1.dotproduct(v2);
    cout << "Dot product: " << dot << endl;

    Vector3D v3 = v1.crossproduct(v2);

    cout << "Cross product: (" << v3.getX() << "," << v3.getY() << "," << v3.getZ() << ")" << endl; 

    return 0;
}