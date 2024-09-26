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

    //Calculate the actual results
    string actualResult[3];
    actualResult[0] = "Input: " + to_string(n); // Print the input, which is n
    actualResult[1] = "Output: Sum = " + to_string(sum); // Print the output, which is the sum of the calculation


    // Print the explanation of the sum with numbers
    actualResult[2] = "(Explanation: ";
    for (int i = 1; i <= n; i++) {
        actualResult[2] += to_string(i);
        if (i < n) {
            actualResult[2] += " + "; // Add plus sign between the numbers
        }
    }
    actualResult[2] += " = " + to_string(sum) + " ) ";

    // Print the actaul output
    for(int i = 0; i<3;i++) {
        cout << actualResult[i] << endl;
    }
    
    
    // Checking the test case with expectes result
    bool testPassed = true;
    for (int i = 0; i<3; i++) {
        if (actualResult[i] != expectedResult[i]) {
            testPassed = false;
            break;
        }
    }

    if (testPassed) {
        cout << "Test Passed" << endl;
    }
        
    else {
        cout << "Test Failed" << endl;
    }

    return 0;
}
