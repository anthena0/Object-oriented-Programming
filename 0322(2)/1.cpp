#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int spaces, stars;

    for (int i = 1; i <= rows; ++i) {
   
        for (spaces = 1; spaces <= rows - i; ++spaces) {
            cout << " ";
        }

        cout << "*"; 

        if (i > 1 && i < rows) {
            for (int j = 1; j <= 2 * (i - 1) - 1; ++j) {
                cout << "=";
            }
            cout << "*";  
        }
        else if (i == rows) {
            for (int k = 1; k < rows * 2 - 1; ++k) {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
