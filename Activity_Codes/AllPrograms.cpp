#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

	double radius, area, circum, ellipse, pi, cellipse;
	double Area_Circle(double), Circumference_Circle(double), Ellipse_Circle(double), Const_pi(double), Circum_Ellipse(double);

	

int main(){
	int choose;
	cout <<"All Programs from Pre-lim, Midterm, and Final term: \n";
	cout <<"\nPrelim term Programs \n";
	cout <<"\n 0. Hello Phillipines";
	cout <<"\n 1. A (Diagonal Pattern '@')";
	cout <<"\n 2. B (Reverse Diagonal Pattern '@')";
	cout <<"\n 3. C (Diagonal Pattern with Fill Below '@')"; 
	cout <<"\n 4. D (Reverse Diagonal Pattern with Fill Below '@')";
	cout <<"\n 5. Edad1 (Activity 1: Introduction to C++ Programming)";
	cout <<"\n 6. Edad2 (Activity 2: Introduction to C++ Programing)";
	cout <<"\n 7. Edad3 (Activity 3: Control Statment)";
	cout <<"\n 8. Edad4 (Activity 4: Array and Multi-Dimensional)";	
	cout <<"\n 9. EdadPGuyabano (Prelim Term Laboratory Test 1)";
	cout <<"\n 10. EdadPTLT22023 (Prelim Term laboraoty Test 2)";
	cout <<"\n 11. EdadPEPhilippines (Prelim Examination)";
	cout <<"\n\n Midterm Programs\n";
	cout <<"\n 12. Edad5 (Activity 5: Search Algorithm)";
	cout <<"\n 14. Edad7 (Activity 7: Other Operations in Array)";
	cout <<"\n 15. EdadMTLT1 (Midterm Laboratory Test 1)";
	cout <<"\n 16. EdadMTLT2 (Midterm Laboratory Test 2)";
	cout <<"\n 17. POGIME (Midterm Examination)";
	cout <<"\n\n Final Term Programs \n";
	cout <<"\n 18. Edad8 (Activity 8:)";
	cout <<"\n 19. Edad9 (Activity 9:)";
	cout <<"\n\nSelect a Program: ";
	cin >> choose;
	
	
	if (choose == 0) // 0. Hello Philippines
	{
		cout << "Hello Philippines"; //cout is use for displaying the output to the screen, while Hello Philippines is the object
	}
	else if ( choose == 1) 	// 1. A (Diagonal Pattern '@')
	{
		
		int s;
		cout <<"Enter the value:\n ";
		cin >> s;
		
			for (int r = 0 ; r<s; r++)
				{	
	  			for (int c=0; c<s; c++)
	  				{
	  				if (r==0||r==s-1||c==0||c==s-1||r==c)
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
 
 	
	 else if (choose == 2) //  2. B (Reverse Diagonal Pattern '@')
	 {
	
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
	else if (choose == 3) // 3. C (Diagonal Pattern with Fill Below '@')
	{
	
		int s;
		cout <<"Enter the value:\n ";
		cin >> s;
	
		for (int r = 0 ; r<s; r++)
		{	
	  		for (int c=0; c<s; c++)
	  		{
	  		if (r==0||r==s-1||c==0||c==s-1||r>=c)
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
	else if (choose == 4) // 4. D (Reverse Diagonal Pattern with Fill Below '@')
	{
	
	
		int s;
		cout <<"Enter the value:\n ";
		cin >> s;


	
		for (int r = 0; r<s; r++)
			{	
	  		for (int c=0 ; c<s; c++)
	  			{
	  			if (r >= s - c - 1 ||r==0||r==s||c==0|| c==s)
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

	else if (choose == 5) //  5. Edad1 (Activity 1: Introduction to C++ Programming)
	{
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

	else if (choose ==6) //  6. Edad2 (Activity 2: Introduction to C++ Programing)"
 	{
	 
	int num1 = 1; int num2 = 2; int num3 = 3; int num4 = 4; int num5 = 5; int num6 = 6; int num7 = 7; int num8 = 8; int num9 = 9; int num10 = 10;
	string title =  "Multiplication Table";
	
	cout << "\t\t\t" <<title <<"\n\n\n";
	cout << 1*num1 <<"\t" << 2*num1 <<"\t" << 3*num1 <<"\t" << 4*num1 <<"\t" << 5*num1 <<"\t" << 6*num1 <<"\t" << 7*num1 <<"\t" << 8*num1 <<"\t" << 9*num1 <<"\t" << 10*num1 <<"\t" <<"\n";
	cout << 1*num2 <<"\t" << 2*num2 <<"\t" << 3*num2 <<"\t" << 4*num2 <<"\t" << 5*num2 <<"\t" << 6*num2 <<"\t" << 7*num2 <<"\t" << 8*num2 <<"\t" << 9*num2 <<"\t" << 10*num2 <<"\t" <<"\n";
	cout << 1*num3 <<"\t" << 2*num3 <<"\t" << 3*num3 <<"\t" << 4*num3 <<"\t" << 5*num3 <<"\t" << 6*num3 <<"\t" << 7*num3 <<"\t" << 8*num3 <<"\t" << 9*num3 <<"\t" << 10*num3 <<"\t" <<"\n";
	cout << 1*num4 <<"\t" << 2*num4 <<"\t" << 3*num4 <<"\t" << 4*num4 <<"\t" << 5*num4 <<"\t" << 6*num4 <<"\t" << 7*num4 <<"\t" << 8*num4 <<"\t" << 9*num4 <<"\t" << 10*num4 <<"\t" <<"\n";
	cout << 1*num5 <<"\t" << 2*num5 <<"\t" << 3*num5 <<"\t" << 4*num5 <<"\t" << 5*num5 <<"\t" << 6*num5 <<"\t" << 7*num5 <<"\t" << 8*num5 <<"\t" << 9*num5 <<"\t" << 10*num5 <<"\t" <<"\n";
	cout << 1*num6 <<"\t" << 2*num6 <<"\t" << 3*num6 <<"\t" << 4*num6 <<"\t" << 5*num6 <<"\t" << 6*num6 <<"\t" << 7*num6 <<"\t" << 8*num6 <<"\t" << 9*num6 <<"\t" << 10*num6 <<"\t" <<"\n";
	cout << 1*num7 <<"\t" << 2*num7 <<"\t" << 3*num7 <<"\t" << 4*num7 <<"\t" << 5*num7 <<"\t" << 6*num7 <<"\t" << 7*num7 <<"\t" << 8*num7 <<"\t" << 9*num7 <<"\t" << 10*num7 <<"\t" <<"\n";
	cout << 1*num8 <<"\t" << 2*num8 <<"\t" << 3*num8 <<"\t" << 4*num8 <<"\t" << 5*num8 <<"\t" << 6*num8 <<"\t" << 7*num8 <<"\t" << 8*num8 <<"\t" << 9*num8 <<"\t" << 10*num8 <<"\t" <<"\n";
	cout << 1*num9 <<"\t" << 2*num9 <<"\t" << 3*num9 <<"\t" << 4*num9 <<"\t" << 5*num9 <<"\t" << 6*num9 <<"\t" << 7*num9 <<"\t" << 8*num9 <<"\t" << 9*num9 <<"\t" << 10*num9 <<"\t" <<"\n";
	cout << 1*num10 <<"\t" << 2*num10 <<"\t" << 3*num10 <<"\t" << 4*num10 <<"\t" << 5*num10 <<"\t" << 6*num10 <<"\t" << 7*num10 <<"\t" << 8*num10 <<"\t" << 9*num10 <<"\t" << 10*num10 <<"\t";
	return 0;
 } 
 
 
	else if (choose == 7) // 7. Edad3 (Activity 3: Control Statment)
	{
	
	int side;
	cout <<"Enter the value: ";
	cin >> side;
	int sides = side * side;

	
	for (int b = sides; b>=1; b-- )
	{	
	  if(b%side==0 && b!=sides){
	 	cout <<"\n\n";
	}	
		cout << b <<"\t";
	}
	return 0;
}

	else if (choose == 8) // 8. Edad4 (Activity 4: Array and Multi-Dimensional)
	
	{
	// this lines of code is for inputs for row and column 
		int row, col, sum = 0 ;
		cout << "Input number of row: ";
		cin >>row;
	
		cout<<"Input number of column: ";
		cin >>col;
		
	// this lines of code is for making an array
		int mdarray[row][col];
	
		for (int indexr = 0; row > indexr ; indexr++){
			for (int indexc = 0; col > indexc ; indexc++){
				cout <<"row[" <<indexr <<"]: column[" <<indexc<<"]: ";
				cin>> mdarray[indexr][indexc];
				sum += mdarray[indexr][indexc];
				}
			}
	cout <<endl;
	cout <<"\t 5x3 Table of Array\n";
	// this lines of code is for table alignment
		for (int indexr = 0 ; row>indexr ; indexr++){
			for (int indexc = 0 ; col>indexc ; indexc++){
					cout << "\t" <<mdarray[indexr][indexc];
			}
			cout <<endl;
	}
		cout <<"\nSum of the array: " <<sum;
	}

	else if (choose == 9) // 9. EdadPGuyabano (Prelim Term Laboratory Test 1)
	
	{
	
	int side;
	cout <<"Enter the value: ";
	cin >> side;
	
for (int row = side ; row>=1; --row){	
	  for (int column = 1; column <= side - row; ++column) {
            cout <<"  ";
    }
        for (int key = 1; key <= 1 * row; ++key) {
            cout << " @  ";
	}
	  cout <<endl;
	}
 		for (int row = 2; row <= side; ++row) {
        	for (int column = 1; column <= side - row; ++column) {
            	cout <<"  ";
        }      
        for (int key = 1; key <= 1 * row; ++key) {
            cout << " @  ";
        }
        cout << endl;
    }
    
    cout <<endl;   
}



	else if (choose == 10) // 10. EdadPTLT22023 (Prelim Term laboraoty Test 2)
	
	{
	
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

	else if (choose == 11) // 11. EdadPEPhilippines (Prelim Examination)
	
	{
	int col,row;
	cout << "Enter the number of row: ";
	cin >> col;
	
	row=col;
	for(int indexa = 0; indexa < row/2; indexa++){
		for(int indexb = 0; indexb < col/2; indexb++){
			cout << " * ";
		}
		
		for(int indexc =0; indexc < col/2; indexc++){
			cout << " @ ";
		}
		cout << endl;
	}

	for(int indexa = 0; indexa < row/2; indexa ++){
	
		for(int indexb = 0; indexb < col/2; indexb++){
			cout << " @ ";
		}
		
		for(int indexc = 0; indexc < col/2; indexc++){
			cout << "  ";
		}
		cout << endl;
	}
		return 0;
}
 else if (choose == 12) // 12. Edad5 (Activity 5: Search Algorithm)
	{
		{
// this lines of code is for inputs for row and column 
	int output, num, row, col;
	cout << "Input number of row: ";
	cin >>row;
	
	cout<<"Input number of column: ";
	cin >>col;
		
// this lines of code is for making an array
	int mdarray[row][col];
	
	for (int indexr = 0; row > indexr ; indexr++){
		for (int indexc = 0; col > indexc ; indexc++){
			cout <<"row[" <<indexr <<"]: column[" <<indexc<<"]: ";
			cin>> mdarray[indexr][indexc];
			}
}
cout << endl << endl;
	for (int indexr = 0 ; row>indexr ; indexr++){
		for (int indexc = 0 ; col>indexc ; indexc++){
				cout << "\t" <<mdarray[indexr][indexc];
		}
		cout <<endl;
}
cout << endl;


cout<<"Input number to search: ";
cin >>num;

for (int indexr = 0; indexr < row; indexr++){
	for(int indexc = 0; indexc < col; indexc++){
	
		if (num==mdarray[indexr][indexc] ){
			row = indexr;
			col = indexc;
			output = 1;
		}
		}
		}
		if (output == 1){
			cout << "Number: " << num << " is found at the index: " << "row: "<< row<< " column: "<< col << endl;
	
		}else {
			cout << "Element not found";
			
		}
	

return 0;
	}

}
else if (choose == 13) // 13. Edad6 (Activity 6: Sorting Algorithm)
	{
		int choose1;
		cout << "\nAll Programs for sorting algorithm \n";
		cout <<"\n 1. Selction Sort";
		cout <<"\n 2. Bubble Sort";
		cout <<"\n 3. Insertion Sort";
		cout <<"\n\n Choose a program for sorting algorithm: ";
		cin >> choose1;
		
	if (choose1 == 1) // 13.1 Selection Sort
	
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
	
	 else if (choose1 == 2) // 13.2 Bubble Sort
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
		

	

	} else if (choose1 == 3) // 13.3 Insertion Sort
	
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
	
}
	else if (choose == 14) // 14. Edad7 (Activity 7: Other Operations in Array)
	
	{
	int select, indexr, indexc, row, col, value; 
	
	int arr[3][3] = {{200,153,123}, {732,568,107}, {105,357}};			
	cout<<"The array is: \n";
	
	for(indexr=0; indexr<3; indexr++){
		for(indexc=0; indexc<3; indexc++){
			cout<<arr[indexr][indexc]<<" \t";
		}
		cout<<endl;
	}
	
	cout << "\nSelect a method:" <<endl;
    cout << "(1) Insertion Program \n(2) Deletion Programm \n(3) Duplication Program \nSelect an array program: ";
    cin >> select;
    cout << endl;
	
	switch (select) {
            case 1:
                cout << "Enter number for row index: ";
                cin >> row;
                cout << "Enter number for column index: ";
                cin >> col;
                cout << "Enter the value: ";
                cin >> value;
				
                for(int index = 8; index>= col; index--){
                	arr[row][index+1] = arr[row][index];
				}
				arr[row][col] = value;
				cout<< "The element " << value << " is inserted on the array \nThe new array is: \n\n";
				
                break;

            case 2:
                cout << "Enter number for row index: ";
                cin >> row;
                cout << "Enter number for column index: ";
                cin >> col;
				
               		for(indexr = 3-1; indexr >= row; row++){
               			for(indexc = 3-1; indexc >= col; col++){
               				arr[row][col] = arr[row][col + 1];
						   }
						   col = 0;
					   }
				
				cout<< "An element is deleted in the array \nThe new array is: \n\n";
                break;

            case 3: {
                int copied_arr[3][3];
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        copied_arr[i][j] = arr[i][j];
                    }
                }
                cout << "Array copied." << endl;
                break;
            }
            default:
                cout << "Invalid input" << endl;
                break;
        }
        if(select == 1 || select == 2 || select == 3){				
        	for(indexr=0; indexr<3; indexr++){
					for(indexc=0; indexc<3; indexc++){
						cout<<arr[indexr][indexc]<<"\t";
					}
					cout<<endl;
				}
		}
}

 else if (choose == 15) // 15. EdadMTLT1 (Midterm Laboratory Test 1)
 {
    int row;
    cout << "Enter row: ";
    cin >> row;
    int arr[row][row];




    //input 3 elements
    int count =1;
    int ase;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cin >> ase;
            arr[i][j] =ase;
            count++;
        }

        cout << endl;
    }
    arr[row-1][row-1] =0;

    //print old array
    cout << "--------------------------------------ARRAY--------------------------------"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout << arr[i][j] << "\t\t\t";
        }

        cout << endl;
    }

    //insert 195
    int val = 195;

    for(int i=row-1;i>=0;i--){
        for(int j=row-1;j>=0;j--){
            if(i==0&& j==1){
                arr[i][j] = val;
                break;
            }else{
                if(i!=0){
                    if(j==0){
                        arr[i][j] = arr[i-1][row-1];
                    }else{
                        arr[i][j] = arr[i][j-1];

                    }
                }else{
                    arr[i][j] = arr[i][j-1];
                }
            }
        }
    }





    //print again
    cout << "----------------------------------NEW ARRAY----------------------------------"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout << arr[i][j] << "\t\t\t";
        }

        cout << endl;
    }

//max
    int largest = 0;
    for(int j=0;j<row;j++){
        for(int i=0;i<row;i++){
            if(arr[j][i]>largest)
            {
                largest = arr[j][i];
            }
        }
    }

    cout << endl<<endl;
    cout << "Largest: " << largest << endl;



    return 0;
}
 else if (choose == 16 ) // 16. EdadMTLT2 (Midterm Laboratory Test 2)
 
 {
    int row = 2;
    int col = 6;

    int arr_first[6],arr_second[6];

    int arr_copied[2][6];

    int input1,input2;
    
    //input 2-digit integer
    for(int index=0 ; index < col; index++){
        cout << "Input element in first array at index("<<index<<"): ";
        cin >> input1;
        arr_first[index] = input1;

        cout << "Input element in second array at index("<<index<<"): ";
        cin >> input2;
        arr_second[index] = input2;

        cout << endl;
    }



    //copy first array to array_copied
    for(int col_loop=0;col_loop<col;col_loop++){
        arr_copied[0][col_loop] = arr_first[col_loop];
    }

    //copy second array to array_copied
    for(int col_loop=0;col_loop<col;col_loop++){
        arr_copied[1][col_loop] = arr_second[col_loop];
    }

    //print copied array
    cout << "\n--------2x6 Bidimensional Array----------------\n";

    for(int row_loop=0;row_loop<row;row_loop++){
        for(int col_loop=0;col_loop<col;col_loop++){
            cout << arr_copied[row_loop][col_loop] << "\t";
        }
        cout << endl;
    }

    //sort multidimensional array using bubble sort technique
    for(int iterate=0;iterate<12;iterate++){
        for(int index=0;index<11-iterate;index++){
            if(arr_copied[index/col][index%col] < arr_copied[(index+1)/col][(index+1)%col])
            {
                int temp = arr_copied[index/col][index%col];
                arr_copied[index/col][index%col] = arr_copied[(index+1)/col][(index+1)%col];
                arr_copied[(index+1)/col][(index+1)%col] = temp;
            }
        }
    }

    cout << endl;
    //print copied array
    cout << "--------Copied Array----------------\n";
    for(int row_loop=0;row_loop<row;row_loop++){
        for(int col_loop=0;col_loop<col;col_loop++){
            cout << arr_copied[row_loop][col_loop] << "\t";
        }
        cout << endl;
    }

    return 0;
}
	
	else if (choose == 17) // 17. POGIME (Midterm Examination)
	
	 {
    const int MAX_LENGTH = 100;
    char fullName[MAX_LENGTH];

    // Get the user's full name as input
    cout << "Input your full name: ";
    cin.getline(fullName, MAX_LENGTH);

    // Define arrays to store vowels and consonants
    char vowels[MAX_LENGTH];
    char consonants[MAX_LENGTH];
    int vowelIndex = 0;
    int consonantIndex = 0;

    // Iterate through each character in the full name
    for (int i = 0; fullName[i] != '\0'; ++i) {
        // Check if the character is a letter
        if ((fullName[i] >= 'a' && fullName[i] <= 'z') || (fullName[i] >= 'A' && fullName[i] <= 'Z')) {
            // Convert the letter to lowercase
            char lowerC = (fullName[i] >= 'A' && fullName[i] <= 'Z') ? (fullName[i] - 'A' + 'a') : fullName[i];
            // Check if the letter is a vowel or consonant
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowels[vowelIndex++] = fullName[i];
            } else {
                consonants[consonantIndex++] = fullName[i];
            }
        }
    }
    // Null-terminate the arrays
    vowels[vowelIndex] = '\0';
    consonants[consonantIndex] = '\0';

    // Sort the consonants
    sort(consonants, consonants + consonantIndex);

    // Print the sorted vowels and consonants
    cout << "VOWELS: " << vowels << endl;
    cout << "CONSONANTS: " << consonants << endl;
    
    return 0;
}
 else if (choose == 18) // 18. Edad8 (Activity 8:)
 
 {	
	cout << "Input the value of radius of the circle: ";						//Print line for getting the input radius
	cin >> radius;
	cout << "Area = "<< Area_Circle(area) << endl;								//Output for Area
	cout << "Circumference = "<<Circumference_Circle(circum) << endl;			//Output for Circumference
	cout << "Ellipse = "<<Ellipse_Circle(circum)<<endl;							//Output for Ellipse
	cout << "Cirumference of Ellipse = "<<Circum_Ellipse(cellipse);				//Output for Circumference of Ellipse
}
 
 else if (choose == 19) // 19. Edad9 (Activity 9:)
 
 {
    int array[10] = {123, 223, 328, 823, 342, 732, 432, 484, 439, 234};
    int operation;
    int element;

    while (true) {
    	
    	
        cout << "\nOperations:\n 1. Print the Array \n 2. Push \n 3. Pop \n 4. Enqueue \n 5. Dequeue \n 6. Terminate the program \n Select an Operretions: ";
        cin >> operation;
	
	   if (operation == 1){
	   	cout << "\n";
	   }

       else if (operation == 2) {
            cout << "Enter the element to push: ";
            cin >> element;
            for (int i = 0; i < 10; ++i) {
                if (array[i] == 0) {
                    array[i] = element;
                    break;
                }
            }
        } else if (operation == 3) {
            bool isEmpty = true;
            for (int i = 0; i < 10; ++i) {
                if (array[i] != 0) {
                    isEmpty = false;
                    break;
                }
            }
            if (isEmpty) {
                cout << "Array is empty" << endl;
            } else {
                for (int i = 9; i >= 0; --i) {
                    if (array[i] != 0) {
                        array[i] = 0;
                        break;
                    }
                }
            }
        } else if (operation == 4) {
            cout << "Enter the element to enqueue: ";
            cin >> element;
            int index = -1;
            for (int i = 0; i < 10; ++i) {
                if (array[i] == 0) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                array[index] = element;
            } else {
                cout << "Array is full" << endl;
            }
        } else if (operation == 5) {
            bool isEmpty = true;
            for (int i = 0; i < 10; ++i) {
                if (array[i] != 0) {
                    isEmpty = false;
                    break;
                }
            }
            if (isEmpty) {
                cout << "Array is empty" << endl;
            } else {
                for (int i = 0; i < 9; ++i) {
                    array[i] = array[i + 1];
                }
                array[9] = 0;
            }
        } else if (operation == 6) {
            cout << "Terminating the program." << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
            break;

        }

        cout <<" \n\tCurrent Array List \n";
        for (int i = 0; i < 10; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
 
 
}

//Constant function for pi
double Const_pi(const double pi){
	return 3.14159;
}
// Reference and formula for area
double Area_Circle(double area){
	area = Const_pi(pi)*(radius*radius);
	return area;
}
// Reference and formula for Circumference of the Circle
double Circumference_Circle(double circum){
 	circum = 2*Const_pi(pi)*radius;
 	return circum;
}
// Reference and formula for Ellipse of the Circle
double Ellipse_Circle (double ellipse){
	double &A = radius;
	double B = 2*A;
	
	ellipse = Const_pi(pi) * A * B;
	return ellipse;
}
// Reference and formula for Circumference of the Ellipse
double Circum_Ellipse (double cellipse){
	double &A = radius;
	double B = 2*A;
	cellipse = ((Const_pi(pi)*2) * sqrt((A*A + B*B)/2) + Const_pi(pi)*(A+B))/2;
	return cellipse;
}








	


