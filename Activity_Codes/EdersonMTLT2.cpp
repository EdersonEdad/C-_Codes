#include <iostream>
using namespace std;

int main ()
{
	// Inputs for rows and columns
 	int col, row;
 	int Input1, Input2, Input3;
	 cout << " Enter row:";
	 cin >> row;
	 
	 cout << " Enter col:";
	 cin >> col;


	//Loops for input values in the array 	
	int mdfirstarr[6], mdsecondarr[6];
	int mdarray[row][col];
	
	
	for (int indexc = 0; indexc < col; indexc++){	
		cout << "Input first row numbers [" << indexc << "]";
		cin >> Input1;
		mdfirstarr[indexc] = Input1;
	
			if (100>mdfirstarr[indexc]){								//if else statment if the number is 2 digits below
				cout << "Wrong input, Should be 3 digits";
				return 0;
}
	
		cout << "Input second row numbers [" << indexc <<"]";
		cin >> Input2;
		mdsecondarr[indexc] = Input2;
	
			if (100>mdsecondarr[indexc]){								//if else statment if the number is 2 digits below
				cout << "Wrong input, Should be 3 digits";
			return 0;

		
	}
	cout << endl;
}


	// Printing all the arrays

	for (int col1 = 0 ; col1 < col ; col1++){
		mdarray[0][col1] = mdfirstarr[col1];
	}
	
	for (int col1 = 0 ; col1 < col ; col1++){
		mdarray[1][col1] = mdsecondarr[col1];
	}

	// Putting all the array into bidimensional array and printing

	for (int row_loop = 0; row > row_loop ; row_loop++){
		for( int col1 = 0; col > col1; col1++){
	
			cout << mdarray[row_loop][col1] << "\t";
		}
		cout << endl;
	}

	// Sorting all the array by smallest to largest 

	for(int iterate = 0; iterate < row*col; iterate++){
    	    for(int index = 0; index < (row*col-1)-iterate; index++){
        	    if(mdarray[index/col][index%col] > mdarray[(index+1)/col][(index+1)%col])
            	{
                	int temp = mdarray[index/col][index%col];
                	mdarray[index/col][index%col] = mdarray[(index+1)/col][(index+1)%col];
                	mdarray[(index+1)/col][(index+1)%col] = temp;
            	}
       		}
    	}
 	cout << endl;
 
 	//Printng all the sorted array
 	for(int row_loop = 0; row_loop<row; row_loop++){
    	    for(int col1 = 0; col1 < col; col1++){
        	    cout << mdarray[row_loop][col1] << "\t";
       		}
        	cout << endl;
    	}

    	return 0;
	}



	

