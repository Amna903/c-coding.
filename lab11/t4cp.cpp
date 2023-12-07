#include <iostream>
using namespace std;

int main() {
    cout << "Enter row size: ";
    int rowSize;
    cin >> rowSize;
cout<<"Enter the elements of the matrix: \n";
    int matrix[rowSize][5];
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
cout<<"Original Matrix: \n";
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int maxSum = 0, maxIndex = 0;
    for (int j = 0; j < 5; j++) {
        int columnSum = 0;
        for (int i = 0; i < rowSize; i++) {
            columnSum += matrix[i][j];
        }
        if (columnSum > maxSum) {
            maxSum = columnSum;
            maxIndex = j;
        }
    }


    if (maxIndex != 0) {
        for (int i = 0; i < rowSize; i++) {
            swap(matrix[i][0], matrix[i][maxIndex]);
        }
    }
    cout << "\n";

    cout<<"Matrix after largest column moved to first:\n";
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
