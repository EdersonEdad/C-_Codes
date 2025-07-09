#include <iostream>
using namespace std;

int main(){
	
	int side;
	cout <<"Enter the value: ";
	cin >> side;
	
for (int row = side ; row>=1; --row){	
	  for (int column = 1; column <= side - row; ++column) {
            cout <<"  ";
    }
        for (int key = 1; key <= 1 * row; ++key) {
            cout << " @  ";
	}
	  cout <<endl;
	}
 		for (int row = 2; row <= side; ++row) {
        	for (int column = 1; column <= side - row; ++column) {
            	cout <<"  ";
        }      
        for (int key = 1; key <= 1 * row; ++key) {
            cout << " @  ";
        }
        cout << endl;
    }
    
    cout <<endl;   
}


