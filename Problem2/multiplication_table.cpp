#include <iostream>
using namespace std;

int main() {

int n;

    // User inputs a number to calculate the multiplication
    cout << "Input: ";
    cin >> n;

    // The multiplication table of n with integers from 1 to 10
    cout << "Output: " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}