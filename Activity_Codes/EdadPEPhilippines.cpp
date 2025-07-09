#include <iostream>
using namespace std;

int main(){
	int col,row;
	cout << "Enter the number of row: ";
	cin >> col;
	
	row=col;
	for(int indexa = 0; indexa < row/2; indexa++){
		for(int indexb = 0; indexb < col/2; indexb++){
			cout << " * ";
		}
		
		for(int indexc =0; indexc < col/2; indexc++){
			cout << " @ ";
		}
		cout << endl;
	}

	for(int indexa = 0; indexa < row/2; indexa ++){
	
		for(int indexb = 0; indexb < col/2; indexb++){
			cout << " @ ";
		}
		
		for(int indexc = 0; indexc < col/2; indexc++){
			cout << "  ";
		}
		cout << endl;
	}
		return 0;
}
