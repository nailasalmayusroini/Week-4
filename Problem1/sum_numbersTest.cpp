#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 64;

    int sum = 0;

    // Calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    string expectedResult[3] = {
        "Input: 64",
        "Output: Sum = 2080",
        "(Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 + 26 + 27 + 28 + 29 + 30 + 31 + 32 + 33 + 34 + 35 + 36 + 37 + 38 + 39 + 40 + 41 + 42 + 43 + 44 + 45 + 46 + 47 + 48 + 49 + 50 + 51 + 52 + 53 + 54 + 55 + 56 + 57 + 58 + 59 + 60 + 61 + 62 + 63 + 64 = 2080 )"
    };
    
    string actualResult[3] = {
        "Input: " + to_string(n),
        "Output: Sum = " + to_string(sum),
        "(Explanation: "
    };

    // Construct explanation
    for (int i = 1; i <= n; i++) {
        actualResult[2] += to_string(i);
        if (i < n) {
            actualResult[2] += " + ";
        }
    }
    actualResult[2] += " = " + to_string(sum) + " )";

    // Print the actual output
    for(int i = 0; i < 3; i++) {
        cout << actualResult[i] << endl; // Change to expectedResult for correct printing
    }
    
    // Checking the test case with expected results
    bool testPassed = true;
    for (int i = 0; i < 3; i++) {
        if (actualResult[i] != expectedResult[i]) { // Use the actualResult for comparison
            testPassed = false;
            break;
        }
    }

    if (testPassed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}