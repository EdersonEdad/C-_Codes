#include <iostream> 
using namespace std;


//Deleting a row and column
int main(){
	
	int rows, cols, select, choose;
	cout << "Input number of row: ";
	cin >>rows;
	
	cout<<"Input number of column: ";
	cin >>cols;
		
// this lines of code is for making an array
	int mdarray[rows][cols];
	
	for (int indexr = 0; rows > indexr ; indexr++){
		for (int indexc = 0; cols > indexc ; indexc++){
			cout <<"row[" <<indexr <<"]: column[" <<indexc<<"]: ";
			cin >> mdarray[indexr][indexc];
			
			}
		}			
cout <<"\t 4x3 Table of Array\n";
	for (int indexr = 0 ; rows>indexr ; indexr++){
		for (int indexc = 0 ; cols>indexc ; indexc++){
				cout << "\t" <<mdarray[indexr][indexc];
		}
		cout <<endl;
}	
	cout <<"Select you want to delete: \n 1. Row \n 2. Column";
	cin >> select;	
	
	switch (select){
		
	case 1: 
	
		cout <<"Select row you want to delete: ";
		cin >> choose;
		
	int newArr[rows - 1][cols];
    // Copy elements to the new array, skipping the row to delete
    for (int indexr = 0, newRow = 0; i < numRows; ++i) {
        if (indexr != rowToDelete) {
            for (int j = 0; j < cols; ++j) {
                newArr[newRow][j] = mdarray[i][j];
            }
            ++newRow;
        }
    }
	}	
}
	break;
	case 2:
	
		cout <<"Select column you want to delete: ";
		cin >> choose;
		for(int indexr = 0; indexr < rows; indexr++){		
        	for(int indexc = cols; indexc < cols;  indexc++){
			}
				mdarray[indexr][indexc-1] = mdarray[indexr][indexc];	
		}
	break;
								
	cout <<endl;
}
 	if(select == 1 || select == 2 ){				
        	for (int indexr=0; indexr<3; indexr++){
					for(int indexc=0; indexc<3; indexc++){
						cout<<mdarray[indexr][indexc]<<"\t";
					}
					cout<<endl;
			}
		}

return 0;
}



#include <iostream>

using namespace std;

const int rows = 3;
const int cols = 4;





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
