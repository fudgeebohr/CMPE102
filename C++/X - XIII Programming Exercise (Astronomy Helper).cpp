#include <iostream>
#include <string>

using namespace std;

void displayMenu();
int getUserChoice();
void displayPlanetInfo(int planetNumber);

int main() {
    string name;
    int choice;
    
    cout << "Full Name: ";
    getline(cin, name);
        
    do {
        displayMenu();
        choice = getUserChoice();
        
        if (choice >= 1 && choice <= 4) {
            displayPlanetInfo(choice);
        } else if (choice == 5) {
            cout << "Exiting the program..." << endl;
        } else {
            cout << "Invalid choice. Please select a number between 1 and 5." << endl;
        }
        
    } while (choice != 5);
    
    return 0;
}

void displayMenu() {
    cout << "————— ASTRONOMY HELPER —————" << endl;
    cout << "Select a Planet: " << endl;
    cout << "(1) Mercury" << endl;
    cout << "(2) Venus" << endl;
    cout << "(3) Earth" << endl;
    cout << "(4) Mars" << endl;
    cout << "(5) Exit the program" << endl;
    cout << "Enter your selection: ";
    
}

int getUserChoice() {
    int choice;
    cin >> choice;
    return choice;
}

void displayPlanetInfo(int planetNumber) {
    string planetName;
    string distance;
    string mass;
    string temperature;
    
    switch (planetNumber) {
        case 1:
            planetName = "——— Mercury ———";
            distance = "57.9 million kilometers";
            mass = "3.31 × 10^23kg";
            temperature = "-173 to 430 degrees Celsius";
            break;
        case 2:
            planetName = "——— Venus ———";
            distance = "108.2 million kilometers";
            mass = "4.87 × 10^24kg";
            temperature = "472 degrees Celsius";
            break;
        case 3:
            planetName = "——— Earth ———";
            distance = "149.6 million kilometers";
            mass = "5.967 × 10^24kg";
            temperature = "-50 to 50 degrees Celsius";
            break;
        case 4:
            planetName = "——— Mars ———";
            distance = "227.9 million kilometers";
            mass = "0.6424 × 10^24kg";
            temperature = "-140 to 20 degrees Celsius";
            break;
        default:
            cout << "Invalid planet number. Please select a number between 1 and 4." << endl;
            return;
    }
    
    cout << planetName << endl;
    cout << "Average distance from the sun: " << distance << endl;
    cout << "Mass: " << mass << endl;
    cout << "Surface temperature: " << temperature << endl;
}
