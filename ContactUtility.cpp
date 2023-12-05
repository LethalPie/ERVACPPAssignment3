#include "ContactUtility.h"

void ContactUtility::sortContacts(std::vector<Contact*>& contacts) {

    std::sort(contacts.begin(),
              contacts.end(),
              [] (Contact *a, Contact *b) { return a->m_friends > b->m_friends; });
}

void ContactUtility::addContact(std::vector<Contact*>& contacts) {

    std::string name;
    int age;
    std::cout << "\n**Adding Contact**\n";
    std::cout << "Contact name: ";
    std::cin >> name;
    std::cout << "Contact age: ";
    std::cin >> age;

    contacts.push_back(new Contact {new std::string(name) , age});
}

void ContactUtility::printContacts(std::vector<Contact*>& contacts) {

}

void ContactUtility::addFriend(std::vector<Contact*>& contacts) {

    std::cout << "Contact that wants to add ('quit' to go back to main menu): ";
    Contact* conAPtr {findContact(contacts)};
    if (!conAPtr) return;

    std::cout << "Who would you like to add? ('quit' to go back to main menu): ";
    Contact* conFPtr {findContact(contacts)};
    if (!conFPtr) return;

    conAPtr->addFriend(conFPtr);
}

void ContactUtility::printFriends(std::vector<Contact*>& contacts) {

}

void ContactUtility::deleteContact(std::vector<Contact*>& contacts) {

}

Contact* ContactUtility::findContact(std::vector<Contact*>& contacts) {

    // Helper function to find contacts
    std::string conCheck;
    std::cin >> conCheck;
    while (conCheck != "quit") {
        auto it = std::find_if(contacts.begin(),
                               contacts.end(),
                               [&conCheck] (Contact *c) { return *c->m_name == conCheck;});

        if (it != std::end(contacts))
            return contacts.at(std::distance(contacts.begin(), it));
        std::cout << "Contact not found, try again ('quit' to go back to main menu): ";
        std::cin >> conCheck;
    }

    return nullptr;
}
