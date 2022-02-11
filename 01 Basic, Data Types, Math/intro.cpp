#include <cstdlib>   // C standard library
#include <iostream>  // Library for in- and outputs
using namespace std; // without "using namespace std;": "std::cout" (or other standard functions)

int main(int argc, char* argv[]){ // Function for execution; in brackets: arguments to be passed --> argc = numbers of arguments; argv[] = arguments themselves (starts with 2 due to program itself)
    cout << "Hello World" << endl; 
    if (argc != 1) { // if any additional arguments are passed
        cout << "You entered " << argc << " arguments:\n"; // "<<" = Stream Insertion Operator
        for (int i=0; i<argc; i++) { // index 0 = name of application
            cout << argv[i] << "\n"; // "[]" = Subscript Operator
        }
    }
    return 0; // Execution without errors
}
