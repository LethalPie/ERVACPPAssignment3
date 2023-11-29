#include <string>
#include <vector>
#include <algorithm>

#ifndef ASSIGNMENT_3_CONTACT_H
#define ASSIGNMENT_3_CONTACT_H


class Contact {
private:
    std::string* m_name { nullptr };
    int m_age {};
    std::vector<Contact*> m_friends {};
public:
    Contact(std::string* name, int age);
    void addFriend(Contact* newFriend);
    void removeFriend(std::string_view friendName);
};


#endif //ASSIGNMENT_3_CONTACT_H