//Write a program that reads in an integer and breaks it into a sequence of individual digits. 
// For example, the input 16384 is displayed as

//1  6  3  8  4

//Make sure the input has no more than five characters and is not negative. 
//(You don’t have to do this through code) Just make sure you enter correct data when running the program.

//Sample Output: 
//Enter an integer: 16384
//The digits extracted from integer 16384 are:
//1  6  3  8  4

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Get input.
    cout << "Enter an integer 5 digits or less: ";
    int number;
    cin >> number;
    cout << endl;

    //Display input and seperate integer.
    cout << "The digits extracted from integer " << number << " are:" << endl;
    cout << number%100000 /10/10/10/10 << setw(3) << number%10000 /10/10/10 << setw(3);
    cout << number%1000 /10 / 10 << setw(3) << number%100 / 10  << setw(3) << number%10 << endl;

    return 0;
}