#include "ContactUtility.h"

int main() {

    // create the vector of Contact pointers
    std::vector<Contact*> contacts;

    // instantiate a ContactUtility object
    ContactUtility contactUtility;

    int userOption {};

    while (true) {
        std::cout << "\n**Pick an option from the following list**\n";
        std::cout << "1: Show Contacts\n"
                     "2: Add Contact\n"
                     "3: Add Friend\n"
                     "4: Print Friends\n"
                     "5: Delete Contact\n"
                     "6: Quit\n";
        std::cin >> userOption;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (userOption) {
            case 1: // Show contacts
                contactUtility.printContacts(contacts);
                break;
            case 2:// Add contact
                contactUtility.addContact(contacts);
                break;
            case 3: // Add friend
                contactUtility.addFriend(contacts);
                break;
            case 4: // Print friends
                contactUtility.printFriends(contacts);
                break;
            case 5: // Delete contact
                contactUtility.deleteContact(contacts);
                break;
            case 6:
                std::cout << "Quiting program.\n";
                return 0;
            default:
                std::cout << "Error.\n";
                break;
        }
    }
}