#include <iostream> // Include the iostream library for input and output functions

using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage


int main() {
    // Declare two integer variables to store the input values
    int a, b;

    // Read the first and second integer from the standard input (keyboard)
    cin >> a;
    cin >> b;

    // Loop from the integer a to the integer b (inclusive)
    for (int n = a; n <= b; n++) {
        // Check the value of n and print the corresponding word if n is between 1 and 9
        if (n == 1) cout << "one" << endl;
        else if (n == 2) cout << "two" << endl;
        else if (n == 3) cout << "three" << endl;
        else if (n == 4) cout << "four" << endl;
        else if (n == 5) cout << "five" << endl;
        else if (n == 6) cout << "six" << endl;
        else if (n == 7) cout << "seven" << endl;
        else if (n == 8) cout << "eight" << endl;
        else if (n == 9) cout << "nine" << endl;
        // If n is greater than 9, determine if it is odd or even and print the result
        else {
            if (n % 2 == 1) cout << "odd" << endl;  // n is odd if the remainder of n divided by 2 is 1
            else cout << "even" << endl;  // n is even if the remainder of n divided by 2 is 0
        }
    }

    // Return 0 to indicate that the program ended successfully
    return 0;
}
