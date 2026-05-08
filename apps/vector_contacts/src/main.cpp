#include "contact_manager.hpp"

int main() {
    ContactManager manager;

    manager.addContact({"Linus", "Torvalds", "+123456789"});
    manager.addContact({"Bjarne", "Stroustrup", "+987654321"});
    manager.addContact({"Ken", "Thompson", "+555666777"});

    std::cout << "System initialization: Contacts (" << manager.size() << ")" << std::endl;
    manager.displayAll();

    std::cout << "\nSearching by last name: Torvalds" << std::endl;
    manager.searchContact("Torvalds");

    std::cout << "\nRemoving by phone: +555666777" << std::endl;
    manager.removeContact("+555666777");

    std::cout << "\nCurrent runlevel status" << std::endl;
    manager.displayAll();

    return 0;
}