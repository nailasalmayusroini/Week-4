#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// TEST CASE
int n = 9;
vector<string> expectedResult = {
    "9 x 1 = 9",
    "9 x 2 = 18",
    "9 x 3 = 27",
    "9 x 4 = 36",
    "9 x 5 = 45",
    "9 x 6 = 54",
    "9 x 7 = 63",
    "9 x 8 = 72",
    "9 x 9 = 81",
    "9 x 10 = 90"
};

// Tp store the actual result 
vector<string> actualResult;

    // Output the multiplication table of n with integers from 1 to 10
    cout << "Output: " << endl;
    for (int i = 1; i <= 10; i++) {
        string result = to_string(n) + " x " + to_string(i) + " = " + to_string(n * i);
        actualResult.push_back(result); // Store result in actualResult
        cout << result << endl;
        }

if (expectedResult == actualResult) {
    cout << "Test Passed" << endl;
}
else {
    cout << "Test Failed" << endl;
}

    return 0;
}