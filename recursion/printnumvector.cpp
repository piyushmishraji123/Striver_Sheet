#include <vector>
#include <iostream>

std::vector<int> printNos(int n) {
    // Create a vector to store the numbers
    std::vector<int> result;

    // Base case: if n is 0, return an empty vector
    if (n == 0) {
        return result;
    }

    // Recursively call printNos for n-1
    result = printNos(n - 1);

    // Add n to the end of the vector
    result.push_back(n);


    return result;
}

int main() {
    int n = 5;
    std::vector<int> numbers = printNos(n);

    // Print the vector of numbers
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
//for the coding ninjas 
// vector<int> printNos(int n) {
//  std::vector<int> result;

//     // Base case: if n is 0, return an empty vector
//     if (n == 0) {
//         return result;
//     }

//     // Recursively call printNos for n-1
//     result = printNos(n - 1);

//     // Add n to the end of the vector
//     result.push_back(n);

   

//     return result;
// }
