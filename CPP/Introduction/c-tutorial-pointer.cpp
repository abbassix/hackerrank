#include <stdio.h> // Include the standard input/output library for functions like printf and scanf

// Function to update the values of a and b
void update(int *a, int *b) {
    // Temporarily store the original value of a
    int tempA = *a;
    // Update a to be the sum of a and b
    *a = *a + *b;
    // Update b to be the absolute difference of a and b
    *b = tempA - *b;
    // Manually compute the absolute value
    if (*b < 0) *b = -*b;
}

int main() {
    // Declare two integer variables to store the input values
    int a, b;
    // Declare two pointer variables and assign them the addresses of a and b
    int *pa = &a, *pb = &b;
    
    // Read two integers from the standard input and store them in a and b
    scanf("%d %d", &a, &b);
    // Call the update function with the addresses of a and b
    update(pa, pb);
    // Print the updated values of a and b
    printf("%d\n%d", a, b);
    
    // Return 0 to indicate that the program ended successfully
    return 0;
}
