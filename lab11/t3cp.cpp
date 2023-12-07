#include <iostream>
using namespace std;

int main() {
   
    string matrix[5][5] = {
        { ".", ".", ".", "*", "*" },
        { ".", "*", ".", ".", "." },
        { ".", "*", ".", ".", "." },
        { ".", "*", ".", ".", "." },
        { ".", ".", "*", "*", "." }
    };

    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    string ans;
    cin >> ans;

    int row = ans[0] - 'A';
    int col = ans[1] - '1';
    if (matrix[row][col] == "*") {
        cout << "Result: BOOM" << endl;
    }
    else {
        cout << "Result: splash" << endl;
    }

    return 0;
}
