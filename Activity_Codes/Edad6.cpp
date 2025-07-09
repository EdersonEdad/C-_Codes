#include <iostream>
using namespace std;

int main(){
// this lines of code is for inputs for row and column 
	int output, num, row, col;
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
			}
}
cout << endl << endl;
	for (int indexr = 0 ; row>indexr ; indexr++){
		for (int indexc = 0 ; col>indexc ; indexc++){
				cout << "\t" <<mdarray[indexr][indexc];
		}
		cout <<endl;
}
cout << endl;


cout<<"Input number to search: ";
cin >>num;

for (int indexr = 0; indexr < row; indexr++){
	for(int indexc = 0; indexc < col; indexc++){
	
		if (num==mdarray[indexr][indexc] ){
			row = indexr;
			col = indexc;
			output = 1;
		}
		}
		}
		if (output == 1){
			cout << "Number: " << num << " is found at the index: " << "row: "<< row<< " column: "<< col << endl;
	
		}else {
			cout << "Element not found";
			
		}
	

return 0;
}


