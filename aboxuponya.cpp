#include <iostream>
using namespace std;

void frame(string phrase){
    string word = "";
    cout << "*******" << endl;

for(auto gap : phrase){
    if(gap == ' '){
        //Below for framing sides of word/gap of frame.
        cout << "*" << word << "*" << endl;
        //Below reset word
        word = "";
}else{
    word = word + gap;
}
}
    //Below for most of frame
    cout << "*" << word << "*" << endl;
    cout << "*******" << endl;
}

int main(){
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    frame(phrase); 
return 0; 
}