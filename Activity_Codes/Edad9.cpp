#include <iostream>
using namespace std;

int main() {
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


