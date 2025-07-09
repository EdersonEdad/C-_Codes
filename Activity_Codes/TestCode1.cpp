#include <iostream>
using namespace std;

int main(){
	
	int s;
	cout <<"Enter the value: ";
	cin >> s;


	
	for (int r = s ; r>=1; --r){	
	  for (int c=1; c<=r; ++c){
	  		cout <<"* ";	
	}
	  cout <<endl;

}
 
    cout <<endl;

    for (int r = 1; r <= s; ++r){
 		for(int c = 1; c <= r; ++c){	  
		 	cout <<"* ";	
	}
	  cout <<endl;  
}


cout <<endl;


    for (int r = 0; r <= s; ++r) {
        for (int c = 0; c <= s - r; ++c) {
            cout <<"   ";
        }      
        for (int k = 0; k <= 2 * r -1 ; ++k) {
            cout << " * ";
        }

        cout << endl;
    }
    
    cout <<endl;   
}
