#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

// Do while loops: At least executed once

int main() {
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do {
        cout << "Guess the Number: ";
        cin >> guess;
        if (guess > secretNum) cout << "Too Large\n";
        if (guess < secretNum) cout << "Too Small\n";
    } while (secretNum != guess);
    cout << "Correct!" << endl;

    // Problem Set: Number guessing with While Loop
    int guess1 = 0;
    while (true) {
        cout << "Guess the Numver: ";
        cin >> guess1;
        if (guess1 > secretNum) cout << "Too Large\n";
        if (guess1 < secretNum) cout << "Too Small\n";
        if (guess1 == secretNum) break;
    }

    return 0;
}