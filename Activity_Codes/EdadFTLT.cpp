# include <iostream>
using namespace std;
	
	int main(){
	
		int how, arr[7], input, element;
		
		cout<< "How many size of array: ";
		cin >> how;
		
		for (int size = 0 ; size < how; size++){
			cout << "Input a number for array"<<"[" << size <<"]: ";
			cin >> input;
			arr[size]=input;
			
		}		
		cout << "\tSet of array List\n";
		for (int index = 0 ; index < 6; index++){
			cout <<arr[index] << "\t"; 
		}
		
	 	cout << "\n\nInsert a new number: ";
            cin >> input;
            for (int index = 0; index < 12; index++) {
                if (arr[index] == 0) {
                    arr[index] = element;
                    break;
                }
            }
		
		    
        cout <<" \n\tCurrent Array List \n";
        	for (int index = 0; index < 6; index++) {
            	cout << arr[index] << " ";
        	}
        cout << endl;
    }
		
	
		


