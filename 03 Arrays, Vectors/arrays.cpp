#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
using namespace std;

int main() {
    int arrNums[10] = {1}; // brackets = predefined length of arrays
    int arrNums2[3] = {1,2,3}; // no value in brackets = automatic setting of length
    int arrNums3[5] = {8,9};

    cout << "1st Value: " << arrNums3[0] << endl;
    arrNums[0] = 7; // Overwriting a specific value in the array
    cout << "Array Size: " << sizeof(arrNums3) / sizeof(*arrNums3); // Total bits divided by bits of one element
    cout << "Array Size: " << sizeof(arrNums3) / sizeof(arrNums3[0]);

    int arrSize = sizeof(arrNums3) / sizeof(arrNums3[0]);
    for (int i=0; i<arrSize; ++i) {
        cout << arrNums3[i] << endl;
    }

    array<int,5> arrNums4 = {9,8,7,6};
    cout << "Size: " << arrNums4.size() << "\n";
    cout << "Size: " << arrNums4.max_size() << "\n";
    cout << "Empty: " << (arrNums4.empty() ? "Yes" : "No") << endl;
    cout << "First Element: " << arrNums4[0] << endl;
    cout << "First Element: " << arrNums4.at(1) << endl;

    // Multidimensional arrays
    // int arrnNums[2][2][2] = {{{1,2}, {3,4}, {5,6}, {7,8}}};
    return 0;
}