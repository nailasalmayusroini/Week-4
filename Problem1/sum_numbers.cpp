#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int n, sum = 0;

    cout << "Input: ";
    cin >> n;

    // Calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

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
    cout << " = " << sum << ")" << endl;

    return 0;
}