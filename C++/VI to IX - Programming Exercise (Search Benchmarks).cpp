#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int sequential_search(int array[], int value, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (array[i] == value)
        {
            return count;
        }
    }
    return -1;
}

int binary_search(int array[], int value, int size)
{
    int count = 0;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        count++;
        int mid = (low + high) / 2;
        if (array[mid] == value)
        {
            return count;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    string name;
    srand(time(0));
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 100 + 1;
    }
    sort(array, array + 20);
    
    cout << "Full Name: ";
    getline(cin, name);
    cout << "Benchmark Array: ";
    for (int i = 0; i < 20; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int value;
    cout << "Target Value: ";
    cin >> value;
    cout << "Sequential Search Algorithm Comparisons: " << sequential_search(array, value, 20) << endl;
    cout << "Binary Search Algorithm Comparisons: " << binary_search(array, value, 20) << endl;
    return 0;
}
