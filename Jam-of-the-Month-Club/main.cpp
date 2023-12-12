#include <iostream>
using namespace std;

int main() {
    //Sequential
    int age = 15;
    cout << age << endl;

    //Selection
    if (age >= 16) {
        cout << "You can drive!" << endl;
    }
    else {
        cout << "You cannot drive yet!" << endl;
    }

    //Repitition
    for (int i = 1; i <= age; i++) {
        cout << "Happy birthday " << i << endl;
    }

    return 0;
}

