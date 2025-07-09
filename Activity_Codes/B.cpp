#include <iostream>
using namespace std;

int main(){
	
	int s;
	cout <<"Enter the value:\n ";
	cin >> s;


	
	for (int r = 0; r<s; r++)
	{	
	  for (int c=0 ; c<s; c++)
	  {
	  	if (r >= s - 1||r==0||r==s||c==0||c==s-1||c==s-1-r)
		{
	  		cout <<"@ ";	
		}
		  else{
		  	
			cout<<"  ";
		}
	}
	  cout <<"\n";
}
	return 0;
}

