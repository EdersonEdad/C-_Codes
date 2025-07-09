#include <iostream>
using namespace std;

int main()
{
	int row, col, inp, count;
	cout << "Row: ";
	cin >> row;
	cout << "Column: ";
	cin >> col;
	
	int mdarray [row][col];
	
	for (int indexr = 0; row >indexr; indexr++)
		{
			for (int indexc = 0; col > indexc ; indexc++)
			{
				cout << "Row: " << indexr << "Column: " << indexc << endl;
				cin >> inp;
				mdarray[indexr][indexc] = inp;
				
				if (inp%2==0)
				{
					count++;
				}
			}
			cout << endl;
		}
		cout << "Even: " << count <<endl;
		return 0;
}
