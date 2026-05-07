#include "app.hpp"

int main() {
    Circle c(5.0);        
    Rectangle r(4.0, 6.0); 
    Triangle t(3.0, 4.0); 

    std::vector<Shape*> shapes = { &c, &r, &t };

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Areas of Shapes" << std::endl;

    for (Shape* s : shapes) {
        std::cout << "Figure: " << s->getName() << " | Area: " << s->area() << std::endl;
    }

    return 0;
}