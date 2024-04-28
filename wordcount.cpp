#include <iostream>
using namespace std;

int main() {
    char character[200]; // single character variable
    int counter=0,spaces=0;
    int i;
    cout << "Enter a sentence: ";
    cin.getline(character , 200); // Attempting to read a sentence into a single character variable
    for(i = 0; character[i] != '\0'; i++){
        if(character[i] == ' '){
            spaces++;
        }
        else{
            counter++;
        }
    }

    cout << "You entered: " << character << endl;
     cout << "Word Count : " << counter << endl;

    return 0;
}
