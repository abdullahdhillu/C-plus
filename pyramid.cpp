#include <iostream>
using namespace std;
int main() {
    int rows;

    // Get the number of rows from the user
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces before the numbers
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        // Inner loop for printing numbers
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        // Move to the next line after each row
        cout <<endl;
    }

    return 0;
}
