#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name;
    srand(time(0));
    int lottery_number[7];
    for(int i = 0; i < 7; i++)
    {
        lottery_number[i] = rand() % 10;
    }
    cout << "Full Name: ";
    getline(cin, name);
    
    cout << "Generated Lottery Numbers: ";
    for(int i = 0; i < 7; i++)
    {
        cout << lottery_number[i] << " ";
    }
    cout << endl;
    return 0;
}
