#include <iostream>     
#include <fstream> 
#include <string>
using namespace std;

int main (){
    string file = "";
    cout << "Enter name of file: ";
    cin >> file;
  ifstream is(file);   

  char data;
  while (is.get(data))                  
    cout << data;

  if (is.eof()){ 
    cout << endl;  
    cout << "End of file reached..." << endl;
  }else{
    cout << "Error reading file..." << endl;
  }

  is.close();                        
  return 0;
}