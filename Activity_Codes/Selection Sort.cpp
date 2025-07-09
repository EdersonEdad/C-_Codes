#include <iostream>
using namespace std;
 
 int main ()
 {
 	int inputnum, arr[50], row, j, temp, min, check, index;
 	cout<< "Enter the size of Array: "; // Use to ask user on how many input number of arrays
 	cin >> inputnum;
	cout << " Enter "<< inputnum<< " Array Elements: "; 
	
	for (row=0; row<inputnum; row++){  // Use to loop how many arrays that the user wanted and putting curly braces to close the loops 
		cin >>arr[row];
	} 
	for (row=0; row <(inputnum-1); row++) // Searching for the minimum element in the list 
	{
		check = 0;
		min = arr[row];
		for(j=(row+1); j<inputnum; j++) // Swapping the value location of the minimum number
		{
			if(min > arr[j])
			{
				min = arr[j]; //Incrementation of minimum to point to next element
				index = j;				check++;

				
			}
		}
		if (check !=0 ) // changed the chk to check to check the numbers if the number is lower from the next number
		{
			temp = arr[row];
			arr[row] = min;
			arr[index] = temp;
			
		}
	}
	cout << "\n Sorted Array is: \n";  // Use to print all the sorted number from smallest to highest value
	for (row=0; row<inputnum; row++)  // Putting curly braces to close the loop
	{
		cout << arr[row] <<" "; 
	}
	cout <<endl;
	return 0;

 }
 
 



