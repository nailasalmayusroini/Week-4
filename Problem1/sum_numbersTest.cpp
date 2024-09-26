#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 12;

    int sum = 0;

    // Calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    string expectedResult[3] = {
        "Input: 12",
        "Output: Sum = 78",
        "(Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 = 78 )"
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