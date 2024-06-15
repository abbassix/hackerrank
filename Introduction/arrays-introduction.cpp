#include <iostream>  // Include the iostream library for input and output functions
using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage

int main() {
    // Declare an integer variable to store the number of elements
    int n;
    
    // Read the number of elements from standard input (keyboard)
    cin >> n;
    
    // Declare an array of size n to store the elements
    int a[n];
    
    // Loop to read n elements from standard input and store them in the array
    // Read each element and store it in the array
    for(int i = 0; i < n; i++) cin >> a[i];
    
    // Loop to print the elements of the array in reverse order
     // Print each element followed by a space
    for(int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    
    // Return 0 to indicate that the program ended successfully
    return 0;
}
