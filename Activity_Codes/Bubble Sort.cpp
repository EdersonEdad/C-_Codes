#include <iostream>
using namespace std;

int main()
{
	int inputnum, firstnum, arr[50], second, temp;
	cout << "Enter the Size (max. 50):  ";		// Use to ask user on how many input number of arrays
	cin>> inputnum;
	cout << "Enter "<<inputnum<<" Numbers: ";
	for (firstnum=0; firstnum < inputnum; firstnum++){ // Use to loop how many arrays that the user wanted and putting curly braces to close the loops
	
		cin >> arr[firstnum];
}
	cout <<" \n Sorting the Array using Bubble Sort Technique.. \n"; //Use to Compare the first two elements and swap if not in the rght order.
	for(firstnum=0; firstnum<(inputnum-1); firstnum++)
	{
		for (second=0; second<(inputnum-firstnum-1); second++)
		{
			if (arr[second]>arr[second+1]) //Use to comparing and swapping adjacent elements until is array is sorted.
			{
				temp = arr[second];
				arr[second] = arr[second+1];
				arr[second+1]= temp;
			}
		}
	}
	cout << "\n Array Sorted Successfully! \n"; //Use to print all the sorted array from smallest to highest value
	cout <<"\n The New Array is: \n";
	for(firstnum=0; firstnum<inputnum; firstnum++){ // Putting curly braces to close the loop
	
		cout <<arr[firstnum]<<" ";
	}
	cout <<endl;
	return 0;
		
}
