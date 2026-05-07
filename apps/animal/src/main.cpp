#include "app.hpp"

using std::cout;
using std::endl;

int main() {
    Animal dog("Rex", 5, "Dog");
    Bird parrot("Kesha", 2, 0.45);
    Human person("Maksim", 18, "Engineer");

    cout << "Objects Info:" << endl;
    cout << dog << endl;
    cout << parrot << endl;
    cout << person << endl;
    cout << endl;

    std::vector<LivingBeing*> entities;
    entities.push_back(&dog);
    entities.push_back(&parrot);
    entities.push_back(&person);

    cout << "Polymorphic Loop:" << endl;
    for (LivingBeing* entity : entities) {
        entity->breathe();      
        entity->makeSound();
        cout << "Details: " << *entity << endl;
        cout << endl;
    }

    return 0;
}