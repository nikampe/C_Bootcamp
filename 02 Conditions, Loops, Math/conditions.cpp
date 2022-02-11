#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Which birthday is important
    string sAge = "0";
    cout << "Enter your age: ";
    cin >> sAge;
    int nAge = stoi(sAge);
    if ((nAge >= 1) && (nAge <= 18)) {
        cout << "Important Birthday\n";
    } else if ((nAge == 21) || (nAge == 50)) {
        cout << "Important Birthday\n";
    } else if (nAge >= 65) {
        cout << "Important Birthday\n";
    } else {
        cout << "Not an Important Birthday\n";
    }

    // Problem Set: Determine School Grade
    string sAge2 = "0";
    int nGrade2 = 0;
    cout << "Enter Age: ";
    cin >> sAge2;
    int nAge2 = stoi(sAge2);
    if (nAge2 < 5) {
        cout << "Too young for school\n";
    } else if (nAge2 == 5) {
        cout << "Kindergarten";
    } else if ((nAge2 > 5) && (nAge2 <= 17)) {
        nGrade2 = nAge2 - 5;
        cout << "Grade: " << nGrade2 << endl;
    } else {
        cout << "College";
    }

    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can I vote: " << canIVote << endl;
    return 0;
}