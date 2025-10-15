#include <iostream>
using namespace std;

int main() {
    int x;
    x = 25;
    x = x + 5;
    x++;                                           //Post increment.
    cout << x << endl;      //Guess what prints.
    cout << x++ << endl;    //Guess what prints.
    cout << ++x << endl;    //Guess what prints.
    cout << --x << endl;    //Guess what prints.  //Pre increment.
    cout << x-- << endl;    //Guess what prints.
    cout << x << endl;      //Guess what prints.
    x = 100 - x++;
    cout << x << endl;
    float y = x / 3.0; //Watch out for operand datatypes.
    cout << y << endl;
    int i = 3;
    y = float(x) / i;  //Casting.
    cout << y << endl;

    return 0;
}

//Int, float and char. --> ASCII code.