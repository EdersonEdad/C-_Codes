#include<iostream>
using namespace std;
int main()
{
	int select, indexr, indexc, row, col, value; //variables
	
	int arr[3][3] = {{200,153,}, {732,568,107}, {105,357}};			
	cout<<"The array is: \n";
	
	for(indexr=0; indexr<3; indexr++){
		for(indexc=0; indexc<3; indexc++){
			cout<<arr[indexr][indexc]<<" \t"; //print array
		}
		cout<<endl;
	}
	
	cout << "\nSelect a method:" << endl;
    cout << "(1) Insertion Program \n(2) Deletion Programm \n(3) Duplication Program \nSelect an array program: ";
    cin >> select;
    cout << endl;
	
	switch (select) {
            case 1:
                cout << "Enter number for row index: ";
                cin >> row;
                cout << "Enter number for column index: ";
                cin >> col;
                cout << "Enter the value: ";
                cin >> value;
				
                for(int index = 8; index>= col; index--){
                	arr[row][index+1] = arr[row][index];
				}
				arr[row][col] = value;
				cout<< "The element " << value << " is inserted on the array \nThe new array is: \n\n";
				
                break;

            case 2:
                cout << "Enter number for row index: ";
                cin >> row;
                cout << "Enter number for column index: ";
                cin >> col;
				
               		for(indexr = 3-1; indexr >= row; row++){
               			for(indexc = 3-1; indexc >= col; col++){
               				arr[row][col] = arr[row][col + 1];
						   }
						   col = 0;
					   }
				
				cout<< "An element is deleted in the array \nThe new array is: \n\n";
			
                break;

            case 3: {
                int copied_arr[3][3];
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        copied_arr[i][j] = arr[i][j];
                    }
                }
                cout << "Array copied." << endl;
               
                break;
            }
            default:
                cout << "Invalid input" << endl;
                break;
        }
        if(select == 1 || select == 2 || select == 3){				//For printing the output array
        	for(indexr=0; indexr<3; indexr++){
					for(indexc=0; indexc<3; indexc++){
						cout<<arr[indexr][indexc]<<"\t";
					}
					cout<<endl;
				}
		}
}
