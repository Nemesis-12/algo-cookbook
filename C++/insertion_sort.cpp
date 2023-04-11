#include <iostream>
#include <vector>

// Function for sorting a vector using insertion sort
std::vector<int> insertionSort(std::vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i;
        while (j > 0 && v[j] < v[j - 1]) {
            std::swap(v[j], v[j - 1]);
            j--;
        }
    }
    return v;
}

int main() {
    std::vector<int> v = { 5, 4, 3, 2, 1 };
    v = insertionSort(v);

    // Print the vector
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }

    return 0;
}
