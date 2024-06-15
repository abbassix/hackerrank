#include <iostream> // Include the iostream library for input and output functions

using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// Define a function `max_of_four` that takes four integers as arguments and returns the largest one
int max_of_four(int a, int b, int c, int d) {
    // Initialize a variable `greatest` with the value of `a`
    int greatest = a;
    
    // Compare `greatest` with `b` and update `greatest` if `b` is larger
    if (b > greatest) greatest = b;
    
    // Compare `greatest` with `c` and update `greatest` if `c` is larger
    if (c > greatest) greatest = c;
    
    // Compare `greatest` with `d` and update `greatest` if `d` is larger
    if (d > greatest) greatest = d;
    
    // Return the largest value
    return greatest;
}

int main() {
    // Declare four integer variables to store the input values
    int a, b, c, d;
    
    // Read four integers from standard input (keyboard) using scanf
    // Note: scanf is a C-style input function. In C++, it's more common to use cin.
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Call the `max_of_four` function with the input values and store the result in `ans`
    int ans = max_of_four(a, b, c, d);
    
    // Print the result using printf
    // Note: printf is a C-style output function. In C++, it's more common to use cout.
    printf("%d", ans);
    
    // Return 0 to indicate that the program ended successfully
    return 0;
}
