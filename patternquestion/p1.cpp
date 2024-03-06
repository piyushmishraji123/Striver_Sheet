//RIGHT SIDE TRIANGLE
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {                //i   j    k
        // Print spaces before the stars          //1   1    1
        for (int j = 1; j < i; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = i; k <= 5; k++) {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }
    return 0;
}
