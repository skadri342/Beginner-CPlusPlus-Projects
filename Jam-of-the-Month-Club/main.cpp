#include <iostream>
using namespace std;

int main() {
    // ask user for input
    // add user input to a sum/running total
    // when user enter's a negative number, the loop terminates and prints the total sum
    int input;
    int sum = 0;

    cout << "Please enter a non-negative integer, enter a negative integer to quit" << endl;
    cin >> input;

    while (input >= 0) {
        cout << input << endl;
        sum += input;
        cout << "Please enter a non-negative integer, enter a negative integer to quit" << endl;
        cin >> input;
    }

    cout << "Sum of the values: " << sum << endl;

    return 0;
}