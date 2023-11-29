#include <iostream>
#include "Contact.h"

Contact::Contact(std::string *name, int age): m_name { name }, m_age { age } {

}

void Contact::addFriend(Contact* newFriend) {
    m_friends.push_back(newFriend);
    std::cout << *m_name << " is now friends with " << *newFriend->m_name << "\n";
}

void Contact::removeFriend(std::string_view friendName) {

    auto checkFriend = [&friendName](Contact* c) { return *c->m_name == friendName; };
    if (auto it = std::find_if(begin(m_friends), end(m_friends), checkFriend); it != std::end(m_friends)) {
        //TODO: remove friend from list
        std::cout << "Removed " << friendName << ".\n";
    } else {
        std::cout << "Count not find " << friendName << " in friend list.\n";
    }
}
