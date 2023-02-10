import random

def bubbleSort(arr):
    n = len(arr)
    count = 0
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
                count += 1
    return count

def selectionSort(arr):
    count = 0
    for i in range(len(arr)):
        min_idx = i
        for j in range(i+1, len(arr)):
            if arr[min_idx] > arr[j]:
                min_idx = j
                count += 1
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return count

def insertionSort(arr):
    count = 0
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >=0 and key < arr[j] :
            arr[j+1] = arr[j]
            j -= 1
            count += 1
        arr[j+1] = key
    return count

def main():
    array = []
    for i in range(20):
        array.append(random.randint(1, 100))
    array.sort()
    str_name = str(input("Full Name: "))
    print("Benchmark Array:",array)
    
    arr1 = [random.randint(0, 100) for i in range(20)]
    arr2 = [random.randint(0, 100) for i in range(20)]
    arr3 = [random.randint(0, 100) for i in range(20)]
    
    print("Bubble Sort Swap Count: ", bubbleSort(arr1))
    print("Selection Sort Swap Count: ", selectionSort(arr2))
    print("Insertion Sort Swap Count: ", insertionSort(arr3))

if __name__ == "__main__":
    main()
