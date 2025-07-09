#include <iostream>
using namespace std;

int add(int num1,int num2){ //computation for sum
	return num1 + num2 ;
}
int sub(int num1, int num2){ //computation for difference
	return num1 - num2;
}
int mult(int num1,int num2){ //computation for product
	return num1 * num2;
}
int div(int num1, int num2){ //computation for quotient
	return num1 / num2;
}

int main (){
	int num1; //daclaration of variable of the first input
	cout <<"Enter the first number: ";
	cin >> num1;
	
	int num2; //daclaration of variable of the second input
	cout << "Enter the second number: ";
	cin >> num2;
	
   	cout << "Addition: "<<add(num1, num2) << "\n"; //output for sum
	cout << "Subtraction: "<<sub(num1, num2) << "\n"; //output for difference
	cout << "Multiplication: "<<mult(num1, num2) << "\n"; //output for product
	cout << "Division: "<<div(num1, num2); //output for quotient
	
	return 0;
}





