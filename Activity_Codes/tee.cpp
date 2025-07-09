#include <iostream>
using namespace std;

int main(){
	int col,row;
	
	cin >> col;
	
	row=col;
	for(int y=0;y<row/2;y++){
	
		for(int x=0;x<col;x++){
			cout << "*";
		}
		
		for(int z=0;z<col;z++){
			cout << "@";
		}
		cout << endl;

	}

	for(int y=0;y<row/2;y++){
	
		for(int x=0;x<col;x++){
			cout << "*";
		}
		
		for(int z=0;z<col;z++){
			cout << " ";
		}
		cout << endl;

	}
	return 0;
}
