#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> phonebook;
    string input;

    // Loop until the user types "exit"
    while (true) {
        cout << "Enter phone number: ";
        cin >> input;

        if (input == "exit") {
            break;
        }

        // Add the phone number to the vector
        phonebook.push_back(input);
    }

    // Print out all the phone numbers in the vector
    cout << "\nPhonebook:\n";
    for (int i = 0; i < phonebook.size(); i++) {
        cout << phonebook[i] << endl;
    }

    return 0;
}
