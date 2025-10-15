//Write a program that reads two times in military format (0900, 1730) and
//prints the number of hours and minutes between the two times. Make sure the result is positive. 

//Sample Output 1: 
//Please enter the first time: 0900
//Please enter the second time: 1730

//8 hours 30 minutes

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //Get input.
    int number1, number2;
    cout << "Please enter the first time: ";
    cin >> number1;
    cout << endl;
    cout << "Please enter the second time: ";
    cin >> number2;
    cout << endl;
    
    //calculate and display hours.
    int hours = number2 / 100 - number1 / 100;
    cout << abs(hours) << " hours ";
    
    //calculate and display minutes.
    int minutes = number2%100 - number1%100;
    cout << abs(minutes) << " minutes" << endl;

    return 0;
}