#include <iostream>
#include <string>
#include <vector>
using namespace std;

string removeDupWord(string str)
{
    string word = "";
    for (auto x : str) 
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
}

int main(){
    string phraseOne, phraseTwo, phraseThree;
    cout << "Please enter a phrase: ";
    getline (cin, phraseOne);
    cout << endl;
    cout << "Please enter the position for the phrase to be displayed. (Center/Right/Left): ";
    cin >> phraseTwo;
    cout << endl;
    cout << "Please enter the character you want to create a frame around the phrase. (@,#,*,+,x,X,o or 0): ";
    cin >> phraseThree;
    
    //removeDupWord(phraseOne);
    const string greeting = removeDupWord(phraseOne);

    const int pad = 1;
    int r=0;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    while (r != rows) {
string::size_type c = 0;
while(c != cols) {
   if (r == 0 || r == rows -1 || c == 0 || c == cols -1) { // if in bordering column or row
            cout << "*";   //output *
        } else {
            if (r == pad + 1 && c == pad + 1) { //if on row for greeting
                cout << greeting; // write greeting
                c += (greeting.size()-1); // adjust invariant
            } else {
                 cout << " ";
            }
        }
        ++c;
    }
    ++r;
    cout << endl;
}

return 0;  
}


//Shit below
for(int i=5;i<15;i++)
    {
        if(i==5 || i==15)
        {
            for(int j=0;j<50;j++)
            {
                cout<<"#";
            }
        }
        else
        {
            for(int j=5;j<50;j++)
            {
                if(j==5 or j==49)
                    cout<<"#";
                else
                    cout<<" ";
                    
            }
        }
        cout<<"\n";
    }