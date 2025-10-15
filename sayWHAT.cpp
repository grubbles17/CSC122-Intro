#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
   ifstream getFile;
   getFile.open("sayWhatFile.txt");

   char character;
   int words = 0;
   int sentence = 0;
   int syllables = 0;

   while(!getFile.eof()){
       getFile.get(character);
       if(character == ' '){
           ++words;
       }else if(character == '.' || character == '?' || character == '!'){
           ++sentence;
       }else if(character == 'a' || character == 'e' || character == 'i'
            || character == 'o' || character == 'u'){
               ++syllables;
       }
   }

   float index = 206.835 - 1.015 * (words/sentence) - 84.6 * (syllables/words);

   cout << "Words: " << words - 1 << endl;
   cout << "Sentances: " << sentence << endl;
   cout << "Syllables: " << syllables << endl;
   cout << "Index: " << round(index) << endl;
return 0;
}