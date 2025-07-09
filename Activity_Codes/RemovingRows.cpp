#include <iostream>

using namespace std;

const int rows = 3;
const int cols = 4;

void displayArray(int arr[][cols], int numRows) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}

void deleteRow(int arr[][cols], int& numRows, int rowToDelete) {
    if (rowToDelete < 0 || rowToDelete >= numRows) {
        cout << "Invalid row index\n";
        return;
    }

    // Create a new array with one less row
    int newArr[rows - 1][cols];

    // Copy elements to the new array, skipping the row to delete
    for (int i = 0, newRow = 0; i < numRows; ++i) {
        if (i != rowToDelete) {
            for (int j = 0; j < cols; ++j) {
                newArr[newRow][j] = arr[i][j];
            }
            ++newRow;
        }
    }

    // Update the original array and the number of rows
    for (int i = 0; i < rows - 1; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = newArr[i][j];
        }
    }

    --numRows;
}

int main() {
    int myArray[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int numRows = rows;

    cout << "Original array:\n";
    displayArray(myArray, numRows);

    int rowToDelete;
    cout << "Enter the row index to delete: ";
    cin >> rowToDelete;

    deleteRow(myArray, numRows, rowToDelete);

    cout << "Array after deleting row " << rowToDelete << ":\n";
    displayArray(myArray, numRows);

    return 0;
}
