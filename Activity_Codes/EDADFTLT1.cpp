#include <iostream>
using namespace std;

int main() {
    int array[12] = {1253, 2273, 3268, 8423, 3424, 7328, 4326, 4834, 4392, 0};
    int operation;
    int element;

            cout << "Insert A element: ";
            cin >> element;
            for (int i = 0; i < 12; ++i) {
                if (array[i] == 0) {
                    array[i] = element;
                    break;
                }
            }
       
        cout <<" \n\tCurrent Array List \n";
        for (int i = 0; i < 10; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    
    
	return 0;
}
