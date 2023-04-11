# Program to implement insertion sort algorithm

def insertion_sort(arr):
    for i in range(1, len(arr)):
        j = i
        while j > 0 and arr[j] < arr[j-1]:
            arr[j], arr[j-1] = arr[j-1], arr[j]
            j -= 1
    return arr

if __name__ == '__main__':
    arr = [1, 5, 2, 4, 3]
    print(insertion_sort(arr))
