#include <iostream>

const int rows = 3;
const int cols = 4;

using namespace std;


void deleteColumn(int arr[rows][cols], int columnIndex) {
    // Check if the column index is valid
    if (columnIndex < 0 || columnIndex >= cols) {
        cerr << "Invalid column index\n";
        return;
    }

    // Create a new array with one less column
    int newArr[rows][cols - 1];

    // Copy elements excluding the specified column
    for (int i = 0; i < rows; ++i) {
        for (int j = 0, newJ = 0; j < cols; ++j) {
            if (j != columnIndex) {
                newArr[i][newJ] = arr[i][j];
                ++newJ;
            }
        }
    }

    // Display the modified array (optional)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols - 1; ++j) {
            cout << newArr[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main() {
    int myArray[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
	
    int columnToDelete; // Specify the column index to delete
    int numCols = cols;
	cout << "Original array:\n";
    
	for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << myArray[i][j] <<  "\t" ;
        }
        cout << "\n";
    }
    
    
	cout << "Enter a column you want to delete: ";
	cin >> columnToDelete;
	
	
    deleteColumn(myArray, columnToDelete);

    return 0;
}
