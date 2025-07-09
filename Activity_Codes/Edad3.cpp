#include <iostream>
using namespace std;

int main(){
	
	int side;
	cout <<"Enter the value: ";
	cin >> side;
	int sides = side * side;

	
	for (int b = sides; b>=1; b-- )
	{	
	  if(b%side==0 && b!=sides){
	 	cout <<"\n\n";
	}	
		cout << b <<"\t";
	}
	return 0;
}

