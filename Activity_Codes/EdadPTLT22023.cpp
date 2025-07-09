#include <iostream>
using namespace std;

int main(){
	
	int usernum;
 
	cout <<"User number: ";
	cin >>usernum;
	
	double sum = 0, average = 0 ;
	double myarrayA[usernum],myarrayB[usernum];	
	
	for (int indexA = 0; usernum > indexA ; indexA++){
			cout <<"Array A, element[" <<indexA << "]";
			cin>> myarrayA[indexA];
			}
			
	cout << endl;
		for (int indexB = 0; usernum > indexB ; indexB++){
			cout <<"Array B, element[" <<indexB << "]";
			cin>> myarrayB[indexB];
			sum += (myarrayB[indexB] + myarrayA[indexB]);
			average = sum/(usernum*2); 	
			}	
						
	cout << endl;
					
for (int indexA = 0 ; usernum>indexA ; indexA++){
	cout <<"\nPrint the element for Array A [" <<indexA <<"]: "<<myarrayA[indexA];
		}
for (int indexB = 0 ; usernum>indexB ; indexB++){
	cout <<"\nPrint the element Array B [" <<indexB <<"]: "<<myarrayB[indexB];
		}	
						
cout <<endl;		
cout << "Number of elements: "<< usernum*2 <<"\nThe average of the array: "<< average;
}

