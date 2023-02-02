#include<iostream>

using namespace std;
// Display
int main()
{ 
    string name;
    int speed,hours;
    cout << "Full Name: " << endl;
    getline(cin, name);
    cout << "What is the speed of the vehicle in mph? " << endl;
    cin >> speed;
    cout << "How many hours has it traveled? " << endl;
    cin >> hours;
    
    cout << ("Hours\t\tDistance Traveled") << endl;
// Loop 
    for (int i = 1; i <= hours; i++){
        cout << i << "\t\t" << i * speed << endl;
    }
    
    return 0;
}
