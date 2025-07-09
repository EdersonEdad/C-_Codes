#include <iostream>
using namespace std;

int main(){
	int num1; //daclaration of variable of the first input
	cout <<"Enter the first number: ";
	cin >> num1;
	
	int num2; //daclaration of variable of the second input
	cout << "Enter the second number: ";
	cin >> num2;
	
	cout << "sum = " << num1 + num2 << "\n"; //computation for sum
	cout << "difference = " << num1 - num2  << "\n"; //computation for difference
	cout << "product = " << num1 * num2 << "\n"; //computation for product
	cout << "qoutient = " << num1 / num2;  //computation for quotient
	return 0; 

}

