#include <iostream>
using namespace std;

int main() {

    string adjective1, adjective2, adjective3;
    string girlsName, boysName, mansName, placeName;
    string occupation1, occupation2;
    string clothing, hobby;

    cout << "Please enter an adjective" << endl;
    getline(cin, adjective1);
    cout << "Please enter a girl's name" << endl;
    getline(cin, girlsName);
    cout << "Please enter another adjective" << endl;
    getline(cin, adjective2);
    cout << "Please enter an occupation" << endl;
    getline(cin, occupation1);
    cout << "Please enter the name of a palce" << endl;
    getline(cin, placeName);
    cout << "Please enter the name of an item of clothing in plural" << endl;
    getline(cin, clothing);
    cout << "Please enter a hobby" << endl;
    getline(cin, hobby);
    cout << "Please enter yet another adjective" << endl;
    getline(cin, adjective3);
    cout << "Please enter another occupation" << endl;
    getline(cin, occupation2);
    cout << "Please enter a boy's name" << endl;
    getline(cin, boysName);
    cout << "Please enter a man's name" << endl;
    getline(cin, mansName);

    cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " <<
    occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing << " and " << hobby <<
    ". She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King "
    << mansName << " forbid her from seeing him.";

    return 0;
}