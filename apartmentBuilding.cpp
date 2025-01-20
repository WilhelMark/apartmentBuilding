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

    // Request three numbers of the apartments by the user
    for (int i = 0; i < 3; i++) {
        int apartmentNumber;
        cout << "Enter apartment number (1-10): ";
        cin >> apartmentNumber;

        // Check the correctness of the entered number of the apartment
        if (apartmentNumber >= 1 && apartmentNumber <= 10) {
            // We display the name of the tenant if the apartment number is correct
            cout << "Resident of apartment " << apartmentNumber << ": " << residents[apartmentNumber - 1] << endl;
        } else {
            // We report an error if the apartment number is incorrect
            cout << "Invalid apartment number. Please enter a number between 1 and 10." << endl;
        }
    }

    return 0;
}
