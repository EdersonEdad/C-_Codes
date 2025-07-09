#include<iostream>
using namespace std;
 
int main (){
	
	int rows, cols, sums = 0;
	cout << "Input number of row: ";
	cin >>rows;
	
	cout<<"Input number of column: ";
	cin >>cols;
		
// this lines of code is for making an array
	int mdarray[rows][cols];
	
	for (int indexr = 0; rows > indexr ; indexr++){
		for (int indexc = 0; cols > indexc ; indexc++){
			cout <<"row[" <<indexr <<"]: column[" <<indexc<<"]: ";
			cin>> mdarray[indexr][indexc];
			
			}
		}									
cout <<endl;

//Printing the 4x3 bidimensional array

cout <<"\t 4x3 Table of Array\n";
	for (int indexr = 0 ; rows>indexr ; indexr++){
		for (int indexc = 0 ; cols>indexc ; indexc++){
				cout << "\t" <<mdarray[indexr][indexc];
		}
		cout <<endl;
}




// Finding the smallest value in bidmensional array

int min_val = mdarray[0][0];		
	for (int indexr = 0; rows > indexr ; indexr++){
		for (int indexc = 0; cols > indexc ; indexc++){
			
        if( min_val > mdarray[indexr][indexc])
             min_val = mdarray[indexr][indexc];
    }
}
    cout << "The Smallest Number Is: " << min_val << endl<<endl;


// Removing a value in bidmensional array

	cout << "Select the row you want to delete: ";
	cin >> rows;
	cout << "Select the column you want to delete: ";
	cin >> cols;
	
	for(int indexr = 3; indexr >= rows; rows++){
        for(int indexc = 2; indexc >= cols; cols++){
            mdarray[rows][cols] = mdarray[rows][cols+1];
		}
		
	}
				cout<< "An element is deleted in the array \nThe new array is: \n\n";	
    
		for(int indexr=0; indexr<4; indexr++){
			for(int indexc=0; indexc<3; indexc++){
					cout<<mdarray[indexr][indexc]<<"\t";
					}
					cout<<endl;		
	}	
}


