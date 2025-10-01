#include <iostream>
using namespace std;

void printReverse(const string& str, int index) {
    
    if (index < 0)
        return;

    cout << str[index];

    printReverse(str, index - 1);
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); 

    cout << "Reversed string: ";
    printReverse(input, input.length() - 1);
    cout << endl;

    return 0;
}
