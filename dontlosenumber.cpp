#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <climits>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include "linewordfile.h"

using namespace std;

class RandomThings
{
public:
   int show(int number)
   {
      srand(static_cast<unsigned>(time(nullptr)));
      int randomInteger; 
    
      randomInteger = ( rand ( ) % number ) + 1;
      return randomInteger;
    }
};

int main(){
    int pickNumber;
    cout << "1) display random Word" << endl;
    cout << "2) display random Line" << endl;
    cout << "3) Quit" << endl;
    cin >> pickNumber;
    
    if(pickNumber == 3){
        return 0;
    } else if(pickNumber == 2){
        ifstream read ("linewordfile.h");
    
        string line;
        vector < string > stuff;
    
        int counter = 0;
        while (getline(read, line, '\n')){
            stuff.push_back( line );
            counter++;
    }
        
        read.close();
        RandomThings lineWord;
        cout << stuff[lineWord.show( counter - 1 )];
    
        cin.get();
        return 0;
    } else{
        fstream file;
        string word, filename;
        filename = "linewordfile.h";
        file.open(filename.c_str());
        
            
            
            while (file >> word) {
                vector < string > stuff;
            int counter = 0;
         stuff.push_back(word);
         counter++;
         cout << stuff[lineword.show(counter-1)];
     }
     
            //RandomThings lineWord;
            //cout << word[lineWord.show( counter - 1 )];
            //cin.get();

}
return 0;
}


//int main()
//{
//    ifstream f("linewordfile.txt");
///
 //   if (f.is_open())
//        cout << f.rdbuf();
//}





/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  ifstream in("linewordfile.txt");

  if(!in)
  {
    cout<< "Cannot open input file!" << endl;
    return 1;
  }

  cout<< "This program reads and prints a text file" << endl;
  cout<< "Press Enter for every line of text to be displayed" << endl;
  string line;
  while(getline(in, line)) 
  {
    cout << line;
    char ch;
    do
    {
      ch = cin.get();
    }while(ch != '\n');
  }
  system("pause");
  return 0;
}
*/





/*
int main(){
    int pickNumber;
    cout << "1) display random Word" << endl;
    cout << "2) display random Line" << endl;
    cout << "3) Quit" << endl;
    cin >> pickNumber;
    
    if(pickNumber == 3){
        return 0;
    } else if(pickNumber == 2){
        ifstream in("linewordfile.txt");
        string line;
        while(getline(in, line)){
            for(int i = 0; i <= 1; i++){
                cout << line;
                cout << i;
                
            }
        }
    }

    
    return 0;
}
*/




//Below is best so far I think.

/*
int main(){
    int pickNumber;
    cout << "1) display random Word" << endl;
    cout << "2) display random Line" << endl;
    cout << "3) Quit" << endl;
    cin >> pickNumber;
    
    if(pickNumber == 3){
        return 0;
    } else if(pickNumber == 2){
        ifstream file("linewordfile.txt");
        string line;
        vector<string> lines;
        srand(time(0));
        int total_lines=0;
        while(getline(file, line)){
            total_lines++;
            lines.push_back(line);    
            }
            
            cout << line;
        }
    
}
*/


//test lea
//la la volatile
//hahahaha
//ooooooo
////mamamamamamamamama


//Below works

/*
#include <cstdlib> 
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime> 
class RandomCrap
{
public:
   int show(int p)
   {
      srand( ( unsigned )time( 0 ) ); 
      int random_integer; 
    
      random_integer = ( rand ( ) % p ) + 1;
      return random_integer;
    }
};
int main() 
{ 
    ifstream read ("example.txt");
    
    string line;
    vector < string > stuff;
    
    int counter = 0;
    while (getline(read, line, '\n'))
    {
      stuff.push_back( line );
      counter++;
    }
    
    read.close();
    RandomCrap a;
    cout << stuff[a.show( counter - 1 )];
    
    cin.get(); 
    return 0;
}
*/




else{
        fstream file;
        string word, filename;
        filename = "linewordfile.h";
        file.open(filename.c_str());
        while(file >> word){
            cout << word << endl;
            cout << "If you dont like that word you can press enter for a new one..." << endl;
            getline(cin, word);
        }
