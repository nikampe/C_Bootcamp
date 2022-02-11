#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i=0; i<=10; ++i) {
        cout << i << endl;
    }

    int arr[] = {1,2,3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i<arrSize; ++i) {
        cout << arr[i] << endl;
    }
    
    int num = 4;
    string isEven = ((num%2) == 0) ? "Even" : "Odd";
    cout << "Even or Odd: " << isEven << endl;

    // Problem Set: All odd numbers from 1 to 20
    for (int i=0; i<=20; ++i) {
        if((i%2) != 0) {
            cout << i << endl;
        }
    }

    // Problem Set: Compounded Interest
    float investment, interest, total;
    cout << "How much to invest: ";
    cin >> investment;
    total = investment;
    cout << "Interest Rate: ";
    cin >> interest;
    interest = interest * 0.01;
    for (int i=0; i<10; ++i) {
        total = total + investment + (total * interest);
    }
    printf("Investment after 10 years: %.2f\n", total);

    return 0;
}