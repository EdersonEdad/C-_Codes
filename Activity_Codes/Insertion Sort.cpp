#include<iostream>
using namespace std;
	
	int main()
{
	int arr[50], inputnum, first, second, k, elem, index;
	cout <<"Enter the Size of Array: "; // Use to ask user on how many input number of arrays
	cin>> inputnum;
	cout << "Enter " <<inputnum<<" Array Elements: "; 
	
	for (first=0; first<inputnum; first++) // Use to loop how many arrays that the user wanted and putting curly braces to close the loops
		{
			cin >> arr[first];
		}
	for (first=1; first<inputnum; first++) // Use to compare all the elements to sort in ascending order
	{
		elem = arr[first];
		if(elem<arr[first-1])
		{
			for(second=0; second<=first; second++)
			{
				if (elem<arr[second]) 
				{
					index = second;
					for (k=first; k>second; k--) // Adding curly braces to cloase the loop
					{
						arr[k] = arr[k-1];
					}
				break;    
				}
			}
		}
		else 
			continue;
			arr[index] = elem;
	}
	cout <<"\nThe New Array (Sorted Array):\n "; //Use to print all the sorted array from smallest to highest value
	for (first=0; first<inputnum; first++) // Putting curly braces to close the loop
		{
			cout <<arr[first]<<" ";
		}
	cout<<endl;
	return 0;
}
