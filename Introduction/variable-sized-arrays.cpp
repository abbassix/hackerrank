#include <iostream> // Include the iostream library for input and output functions
#include <vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage

int main() {
    // Declare two integer variables to store the number of arrays (n) and the number of queries (q)
    int n, q;
    // Read the number of arrays and the number of queries from standard input (keyboard)
    cin >> n >> q;
    
    // Declare a vector of vectors to store the n arrays
    // Create a vector of size n, where each element is a vector of integers
    vector<vector<int>> arr_n(n);
    
    // Reading the n arrays
    for (int i = 0; i < n; i++) {
        // Declare an integer to store the length of the current array
        int l_n;
        // Read the length of the current array
        cin >> l_n;
        // Directly assign a vector of size l_n to arr_n[i]
        arr_n[i] = vector<int>(l_n);
        // Read each element of the current array and store it in arr_n[i]
        for (int j = 0; j < l_n; j++) cin >> arr_n[i][j];
    }

    // Handling queries
    for (int k = 0; k < q; k++) {
        // Declare two integers to store the indices for each query
        int i, j;
        // Read the indices for the current query
        cin >> i >> j;
        // Print the element at the specified indices
        cout << arr_n[i][j] << endl;
    }
    
    // Return 0 to indicate that the program ended successfully
    return 0;
}
