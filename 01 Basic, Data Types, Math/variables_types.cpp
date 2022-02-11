#include <cstdlib>
#include <iostream>
#include <string>  // Library for strings
#include <limits>  // Library for min/max values
using namespace std;

// Global variable (declared outside of function) --> can be accessed in whole code, not just in one specific function
int g_iRandNum = 0;

// Constant (will not change over time)
const double PI = 3.14159265;

int main() {
    // Integer
    int nDays = 7;
    // Double (15 decimals precision)
    double dGrade = 4.5;
    // Boolean
    bool bMarried = true;
    // Character
    char chName = 'A';
    // Positive, small value (min: 0, max: 65,000)
    unsigned short int u16Age = 43;
    // Small value (min: -32,000, max: 32,000)
    short int siWeight = 1800;
    // Long (big numbers)
    long lBigNum = 1000000;
    // Long Double (big doubles)
    long double ldPi = 3.14;
    // Float (max: 6 digit decimal)
    float fPi = 3.1415;
    // Min and max of data types (!= precision)
    cout << "Min Integer: " << numeric_limits<int>::min() << endl;
    cout << "Max Integer: " << numeric_limits<int>::max() << endl;
    cout << "Min Double: " << numeric_limits<double>::min() << endl;
    cout << "Max Double: " << numeric_limits<double>::max() << endl;
    // ...
    // Bites used by data type
    cout << "Size of Integer (in Bytes): " << sizeof(int) << endl;
    cout << "Size of Double (in Bytes): " << sizeof(double) << endl;
}
