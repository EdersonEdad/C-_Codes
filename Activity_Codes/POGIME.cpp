#include <iostream>
#include <string>

using namespace std;

int main(){
 
 int letters, cons = 0, vowel = 0;
 string name;
 cout << "How many letters in you name: ";
 cin >> letters; 
 
 // Inputing the letters 1 by 1 
 string mdarray[18];
 for (int index = 0 ; index < letters; index++ ){  
 	cout << " Enter the letter [" << index << "]";
	cin >> mdarray[index];
 }
 
// if else statement for finding the vowels and consonant 
	string mdarray1[100], mdarray2[100];
		for (int index = 0; index < letters; index++){
			if (mdarray[index] == "a" || mdarray[index] == "e" || mdarray[index] == "i" || mdarray[index] == "o" || mdarray[index] == "u" ){
				mdarray1[0]	= mdarray[index];
				vowel++;

	
	for (int indexr = 0 ; indexr < letters ; indexr++ ){
		cout << mdarray1[indexr];
	}
 
	 
  } else {
  	mdarray2[0] = mdarray[index];
  	cons++;
  	
  		for (int indexc = 0; indexc < letters; indexc++){	  
  		cout << mdarray2[indexc];
  	
 	 	}
 	}
 }

cout << endl;

 cout <<"The vowels in your name are: " <<vowel << endl;
 cout <<"The consonants in your name are: " <<cons;
}


