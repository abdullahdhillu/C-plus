#include <iostream>

int main() {
    int rows;

    // Get the number of rows from the user
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces before the numbers
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        // Inner loop for printing numbers
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
