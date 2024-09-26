#include <iostream>
#include <string>
using namespace std;

int main() { 

    // TEST CASE
    int n = 6;
    int sum = 0;

    // Calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    string expectedResult[3] = {
        "Input: 6",
        "Output: Sum = 21",
        "(Explanation: 1 + 2 + 3 + 4 + 5 + 6 = 21)"
    };

    cout << "Input: ";
    cin >> n;

    // Print the sum
    cout << "Ouput: Sum = " << sum << endl;

    // Print the explanation of the sum with numbers
    cout << "(Explanation: ";
    for (int i = 1; i <= n; i++) {
        cout << i;

        if (i < n) {
            cout << " + "; // Add plus sign between the numbers
        }
    }

    // Final part of the explanation of the sum
    string result = " = " + to_string(sum)+ ")";
    
    if (expectedResult == result) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }

    return 0;
}