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

        stars = 2 * row - 1;
        while (stars > 0) {
            cout << "*";
            stars--;
        }

        cout << endl;
        row++;
    } while (row <= maxRows);

    return 0;
}