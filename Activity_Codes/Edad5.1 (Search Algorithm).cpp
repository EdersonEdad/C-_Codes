#include <iostream>
#include <algorithm>
using namespace std;

int main() {
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
