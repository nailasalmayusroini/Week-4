#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// TEST CASE
int n = 120;
vector<string> expectedResult = {
    "120 x 1 = 120",
    "120 x 2 = 240",
    "120 x 3 = 360",
    "120 x 4 = 480",
    "120 x 5 = 600",
    "120 x 6 = 720",
    "120 x 7 = 840",
    "120 x 8 = 960",
    "120 x 9 = 1080",
    "120 x 10 = 1200"
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