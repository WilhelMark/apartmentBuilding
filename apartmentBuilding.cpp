#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create an array of lines for storing the names of the tenants
    string residents[10];

    // Entering the surnames of the residents of the apartments
    cout << "Enter the last names of the residents for apartments 1 to 10:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Apartment " << (i + 1) << ": ";
        getline(cin, residents[i]); // Read the surname using Getline
}

    return 0;
}
