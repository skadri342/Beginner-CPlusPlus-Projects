#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //generate 10 die rolls and print out each as you go along
    srand(time(nullptr));
    int die_roll;

    for (int i = 0; i < 10; i++) {
        die_roll = rand() % 6 + 1;
        cout << die_roll << endl;
    }

    return 0;
}