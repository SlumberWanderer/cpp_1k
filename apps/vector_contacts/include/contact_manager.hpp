#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "contact.hpp"

class ContactManager {
private:
    std::vector<Contact> contacts;

    bool matches(const Contact& c, const std::string& query) const {
        return c.firstName == query || c.lastName == query || c.phoneNumber == query;
    }

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
    }

    void removeContact(const std::string& query) {
        auto it = std::remove_if(contacts.begin(), contacts.end(), [&](const Contact& c) {
            return matches(c, query);
        });
        if (it != contacts.end()) {
            contacts.erase(it, contacts.end());
        }
    }

    void searchContact(const std::string& query) const {
        bool found = false;
        for (const auto& c : contacts) {
            if (matches(c, query)) {
                c.display();
                found = true;
            }
        }
        if (!found) {
            std::cout << "Contact not found." << std::endl;
        }
    }

    void displayAll() const {
        if (contacts.empty()) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        for (const auto& c : contacts) {
            c.display();
        }
    }

    size_t size() const {
        return contacts.size();
    }
};