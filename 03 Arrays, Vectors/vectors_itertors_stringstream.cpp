#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// Vectors: used when size of array is not known

int main() {
    vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;

    vecRandNums.push_back(30); // Add another element to the vector
    cout << "Vector Size: " << vecRandNums.size() << endl;
    cout << "Last Index: " <<  vecRandNums[vecRandNums.size()-1] << endl;

    vector<int>::iterator it;
    it = find(vecRandNums.begin(), vecRandNums.end(), 20);
    cout << *it << endl;

    // Save words from string seperately in a vector
    string sSentence = "This is a random string";
    vector<string> vecsWords;
    stringstream ss(sSentence); 
    string sIndivStr;
    char cSpace = ' ';
    while (getline(ss, sIndivStr, cSpace)) {
        vecsWords.push_back(sIndivStr);
    }
    for (int i=0; i<vecsWords.size(); ++i) {
        cout << vecsWords[i] << endl;
    }

    // Problem Set: Calculator
    double dbNum1 = 0, dbNum2 = 0;
    string sCalc = "";
    vector<string> vecsCalc;
    cout << "Enter Calculation (e.g. 5 + 6): ";
    getline(cin, sCalc); // Same as "cin"
    stringstream ss2(sCalc);
    string indivStr;
    char space = ' ';
    while(getline(ss2, indivStr, space)) {
        vecsCalc.push_back(indivStr);
    }
    dbNum1 = stoi(vecsCalc[0]);
    dbNum2 = stoi(vecsCalc[2]);
    string operation = vecsCalc[1];
    if (operation == "+") {
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1+dbNum2));
    } else if (operation == "-") {
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1-dbNum2));
    } else if (operation == "*") {
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1*dbNum2));
    } else if (operation == "/") {
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1/dbNum2));
    } else {
        cout << "Please enter only +, -, *, /\n";
    }

    return 0;
}