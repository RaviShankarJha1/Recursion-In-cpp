#include <iostream>
using namespace std;

int sum(int n) {

    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        int result = sum(number);
        cout << "Sum from 1 to " << number << " is: " << result << endl;
    }

    return 0;
}
