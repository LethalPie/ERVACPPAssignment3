#include <iostream>
#include <limits>

int main() {

    // create the vector of Contact pointers
    // instantiate a ContactUtility object

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
            // set up the switch to call the appropriate ContactUtility method
        }

    }
}