#include <iostream>

int findIndex(int arr[], int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not found in the array
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    int element_to_find = 10;
    int index = findIndex(arr, size, element_to_find);
    if (index != -1) {
        std::cout << "Index of " << element_to_find << " is: " << index << std::endl;
    } else {
        std::cout << element_to_find << " not found in the array." << std::endl;
    }

    return 0;
}
