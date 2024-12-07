#include <iostream>
using namespace std;

#define MAX 50

int main() {
    string val = "WELCOMETOZOHOCORPORATION";
    char mat[MAX][MAX]; // Use char array to store characters
    int idx = 0; // Index for the string

    // Fill the matrix with the string
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (idx < val.size()) {
                mat[i][j] = val[idx++];
            } else {
                mat[i][j] = '-'; // Fill extra spaces with blank if string ends
            }
        }
    }

    // Printing the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
