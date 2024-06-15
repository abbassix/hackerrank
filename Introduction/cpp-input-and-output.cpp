#include <iostream>  // Include the iostream library to use input and output functions

using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage


int main() {
    /* Read input from STDIN.
    Print output to STDOUT
    Input: One line that contains space-separated integers:
    a, b, and c.
    Output: Print the sum of the three numbers on a single line. */
    
    // Declare three integer variables to store the input values
    int n1, n2, n3;

    // Read the three integers from standard input (keyboard) and store them in the variables n1, n2, and n3
    cin >> n1 >> n2 >> n3;

    // Calculate the sum of the three integers
    int sum = n1 + n2 + n3;

    // Print the calculated sum to the standard output (screen)
    cout << sum;
    
    // Return 0 to indicate that the program ended successfully
    return 0;
}
