#include <iostream>
using namespace std;

int main() {
    int row = 1;
    int maxRows = 5; 
    int spaces, stars;

    do {
        spaces = maxRows - row;
        while (spaces > 0) {
            cout << " ";
            spaces--;
        }

        if (row == 1 || row == maxRows) {
            stars = 1;
            cout << "*";
        }
        else {
            stars = 2 * row - 1;
            cout << "*";
            while (stars > 2) {
                cout << " ";
                stars--;
            }
            cout << "*";
        }

        cout << endl;
        row++;
    } while (row <= maxRows);

    return 0;
}