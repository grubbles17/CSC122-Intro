//Arithmetic operators.
//Assignment operator.
//Assignment statement   L.H.S = R.H.S; LHS is always a variable.
//RHS could be a constant/literal, variable, expression.
//Examples ... age = 45; age = x; age = x + 45;
//Formatting.
//Reading input from the user.
#include <iostream>
#include <iomanip>
using namespace std;

//Variables are writting in lowercase and constans as uppercase.
const float ROI = 3.5;  //Constant declaration and initalization.

int main() {
    float amount = 0.0, interest = 0.0, endOfYrBal = 0.0;
    cout << "Please enter the amount of CD: "; //Prompt the user
    // >> is called stream Extraction operator.
    cin >> amount;                              //Get value from user.
    // +, -, *, /, %, These are availale operators.
    //Operator precedence, P MD AS. In C++ there are no exponents. Solved left to right.
    interest = amount *(ROI/100);               //arithmetic expression.
    endOfYrBal = amount + interest;

    cout << fixed << showpoint << setprecision(2); //Formatting for currency.

    cout << "At the end of one year the new balance is: $" << endOfYrBal << endl << endl;
    return 0;
}