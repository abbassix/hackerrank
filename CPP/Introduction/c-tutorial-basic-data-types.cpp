#include <cstdio> // Include necessary header for printf and scanf


int main() {
    int n;
    long l;
    char c;
    float f;
    double d;

    // Read input values and store them in the variables
    scanf("%d %ld %c %f %lf", &n, &l, &c, &f, &d);

    // Print the values stored in the variables
    printf("%d \n%ld \n%c \n%f \n%lf", n, l, c, f, d);

    // Indicate that the program ended successfully
    return 0;
}
