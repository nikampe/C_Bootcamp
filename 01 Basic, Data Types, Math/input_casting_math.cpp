#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sQuestion ("Enter Numbers 1: ");
    string sNum1, sNum2;
    cout << sQuestion;
    cin >> sNum1; // ">>" = Extraction Operator; First input saved in variables sNum1
    cout << "Enter Number 2: ";
    cin >> sNum2; // Second input saved in variables sNum2
    int nNum1 = stoi(sNum1); // Convert string into integer
    int nNum2 = stoi(sNum2);
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    // Problem Set: Enter Miles; Convert to Kilometers
    string sMiles;
    double dMiles, dKilometers;
    cout << "Enter Miles: ";
    cin >> sMiles;
    dMiles = stod(sMiles);
    dKilometers = dMiles * 1.60934;
    printf("%.1f Miles equals %.4f Kilometers.\n", dMiles, dKilometers);
}