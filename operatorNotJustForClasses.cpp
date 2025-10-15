#include <iostream>
#include <string>
#include <locale>

using namespace std;

enum cardType{Hearts, Spades, Clubs, Diamonds, Wrong};

cardType checkType(string cardAnswer){
locale myLocale;

//ta for Try Again...
cardType ta = Wrong;

string spade = "spades";
string club = "clubs";
string diamond = "diamonds";
string heart = "hearts";

int forLength = cardAnswer.length();
for (int i = 0; i < forLength; ++i) {
cardAnswer[i] = tolower(cardAnswer[i], myLocale);
}
//If not wrong change to card...
if (cardAnswer == spade.substr(0, forLength)){
ta = Spades;
} else if (cardAnswer == club.substr(0, forLength)) {
ta = Clubs;
} else if (cardAnswer == diamond.substr(0, forLength)) {
ta = Diamonds;
} else if (cardAnswer == heart.substr(0, forLength)) {
ta = Hearts;
}
return ta;
}

void displayAnswers(cardType ta){
switch(ta){
case Spades:
cout << "So, you have a spade! Dig me a hole out back, won't you?" << endl;
break;
case Clubs:
cout << "Ah, a club! Don't beat me up!!" << endl;
break;
case Diamonds:
cout << "Ooo...diamonds. Don't cut my monitor with those!" << endl;
break;
case Hearts:
cout << "You have a heart! Don't wear it on your sleeve..!" << endl;
break;
case Wrong:
cout << "I'm sorry, I don't recognize that suit...please try again." << endl;
break;
}
}

int main(){
char again = 'y';
string cardAnswer;
cardType type;

cout << "             Welcome to the Card Suit Entering Program!!!" << endl;

while(again == 'y' || again == 'Y') {
cout << "What is the suit of your card? ";
cin >> cardAnswer;

type = checkType(cardAnswer);
displayAnswers(type);

cout << "Another card? ";
cin >> again;
}
cout << "Thank you for using the CSEP!!" << endl;
cout << "Endeavor to have a stimulating day!" << endl;

return 0;
}