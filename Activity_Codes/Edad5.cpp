# include <iostream>
using namespace std;

int main(){
// this lines of code is for inputs for row and column 
	int row, col, sum = 0 ;
	cout << "Input number of row: ";
	cin >>row;
	
	cout<<"Input number of column: ";
	cin >>col;
		
// this lines of code is for making an array
	int mdarray[row][col];
	
	for (int indexr = 0; row > indexr ; indexr++){
		for (int indexc = 0; col > indexc ; indexc++){
			cout <<"row[" <<indexr <<"]: column[" <<indexc<<"]: ";
			cin>> mdarray[indexr][indexc];
			sum += mdarray[indexr][indexc];
			}
		}
cout <<endl;
cout <<"\t 5x3 Table of Array\n";
// this lines of code is for table alignment
	for (int indexr = 0 ; row>indexr ; indexr++){
		for (int indexc = 0 ; col>indexc ; indexc++){
				cout << "\t" <<mdarray[indexr][indexc];
		}
		cout <<endl;
}
	cout <<"\nSum of the array: " <<sum;
}
