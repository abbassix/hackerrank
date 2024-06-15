#include <bits/stdc++.h> // Include all standard libraries for competitive programming (not recommended for large projects)

using namespace std; // Use the standard namespace to avoid prefixing std:: before every standard library usage

// Function declarations for trimming whitespace from strings
string ltrim(const string &);
string rtrim(const string &);


int main()
{
    // Declare a string to store the input line
    string n_temp;
    // Read a full line of input into the string n_temp
    getline(cin, n_temp);

    // Convert the trimmed input string to an integer
    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    // Check the value of n and print the corresponding word
    if (n == 1) {
        cout << "one";
    }
    else if (n == 2) {
        cout << "two";
    }
    else if (n == 3) {
        cout << "three";
    }
    else if (n == 4) {
        cout << "four";
    }
    else if (n == 5) {
        cout << "five";
    }
    else if (n == 6) {
        cout << "six";
    }
    else if (n == 7) {
        cout << "seven";
    }
    else if (n == 8) {
        cout << "eight";
    }
    else if (n == 9) {
        cout << "nine";
    }
    else {
        cout << "Greater than 9";
    }

    // Return 0 to indicate that the program ended successfully
    return 0;
}

// Function to trim leading whitespace from a string
string ltrim(const string &str) {
    // Create a copy of the input string
    string s(str);

    s.erase(
        // Starting from the beginning of the string
        s.begin(),
        // Find the first non-whitespace character
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    // Return the trimmed string
    return s;
}

// Function to trim trailing whitespace from a string
string rtrim(const string &str) {
    // Create a copy of the input string
    string s(str);

    s.erase(
        // Find the first non-whitespace character from the end
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        // Ending at the end of the string
        s.end()
    );

    // Return the trimmed string
    return s;
}
