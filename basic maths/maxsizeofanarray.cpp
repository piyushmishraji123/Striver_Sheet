#include <iostream>
#include <limits>

int main() {
    // Use std::numeric_limits to find the maximum value for size_t
    size_t max_size = std::numeric_limits<size_t>::max();

    // Calculate the maximum size of an int array
    size_t max_int_array_size = max_size / sizeof(int);

    std::cout << "The maximum size of an int array on this system is: " << max_int_array_size << std::endl;

    return 0;
}
