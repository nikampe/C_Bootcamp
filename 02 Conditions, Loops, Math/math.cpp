#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

// Main functions reference: cppreference.com

int main() {
    // Absolute Value
    cout << "abs(-10) = " << abs(-10) << endl;
    // Sqaure Root
    cout << "sqrt(81) = " << sqrt(81) << endl;
    // Min, Max
    cout << "max(4,5) = " << max(4,5) << endl;
    cout << "max(4.3,5.8) = " << fmax(4.3,5.8) << endl;
    // Floor
    cout << "floor(23.841) = " << floor(23.841) << endl;
    // Round
    cout << "round(23.841) = " << round(23.841) << endl;
    // Exponential
    cout << "exponential(100) = " << exp(100) << endl;
    // Log
    cout << "log(20.079) = " << log(20.079) << endl;
    cout << "log_2(8) = " << log2(8) << endl;

    // Random Values
    srand(time(NULL));
    int randomNum = rand() % 11; // All up to but not including level
    cout << "Secret Number: " << randomNum << endl;
    return 0;
}