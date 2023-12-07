#include<iostream>
using namespace std;
int countIdenticalArrays(int matrix[][3], int row) {
    int identicalRows = 0;

    for (int i = 0; i < row; i++) {
        bool rowCounted = false;

        for (int j = 0; j < row; j++) {
            if (i != j) {
                bool identical = true;

                for (int k = 0; k < 3; k++) {
                    if (matrix[i][k] != matrix[j][k]) {
                        identical = false;
                        break;
                    }
                }

                if (identical) {
                    if (!rowCounted) {
                        identicalRows++;
                        rowCounted = true;
                    }
                }
            }
        }
    }

    return identicalRows;
}

int main() {
    cout << "Enter the number of rows for the array: ";
    int row;
    cin >> row;

    int matrix[row][3];

    cout << "Enter the elements of the array: \n";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int identicalRows = countIdenticalArrays(matrix, row);
    cout << "The count of identical rows in the array is: " << identicalRows << endl;

    return 0;
}
