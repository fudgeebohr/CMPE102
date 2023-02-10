import random

def sequential_search(array, value):
    count = 0
    for i in range(len(array)):
        count += 1
        if array[i] == value:
            return count
    return -1

def binary_search(array, value):
    count = 0
    low = 0
    high = len(array) - 1
    while low <= high:
        count += 1
        mid = (low + high) // 2
        if array[mid] == value:
            return count
        elif array[mid] < value:
            low = mid + 1
        else:
            high = mid - 1
    return -1

def main():
    array = []
    for i in range(20):
        array.append(random.randint(1, 100))
    array.sort()
    
    str_name = str(input("Full Name: "))
    
    print("Benchmark Array:", array)
    value = int(input("Target Value: "))
    print("Sequential Search Algorithm Comparisons:", sequential_search(array, value))
    print("Binary Search Algorithm Comparisons:", binary_search(array, value))

main()
