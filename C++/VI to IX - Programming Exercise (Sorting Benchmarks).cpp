#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

int bubbleSort(vector<int> arr) {
    int swaps = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}

int selectionSort(vector<int> arr) {
    int swaps = 0;
    for (int i = 0; i < arr.size(); i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            swaps++;
        }
    }
    return swaps;
}

int insertionSort(vector<int> arr) {
    int swaps = 0;
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            swaps++;
        }
        arr[j + 1] = key;
    }
    return swaps;
}

int binary(vector<int> array, int value) {
    int count = 0;
    int low = 0;
    int high = array.size() - 1;
    while (low <= high) {
        count += 1;
        int mid = (low + high) / 2;
        if (array[mid] == value) {
            return count;
        } else if (array[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    string name;
    vector<int> array;
    srand(time(NULL));
    for (int num = 0; num < 20; num++) {
        array.push_back(rand() % 100 + 1);
    }
    sort(array.begin(), array.end());
    cout << "Full Name: ";
    getline(cin, name);
    cout << "Benchmark Array: ";
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    for (int i = 0; i < 20; i++) {
        arr1.push_back(rand() % 100);
        arr2.push_back(rand() % 100);
        arr3.push_back(rand() % 100);
    }
    cout << "Bubble Sort Swap Count: " << bubbleSort(arr1) << endl;
    cout << "Selection Sort Swap Count: " << selectionSort(arr2) << endl;
    cout << "Insertion Sort Swap Count: " << insertionSort(arr3) << endl;
    return 0;
}
