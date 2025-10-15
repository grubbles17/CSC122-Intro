#ifndef ROLODEXENTRY_H_INCLUDED
#define ROLODEXENTRY_H_INCLUDED

#include <string>
using namespace std;

class RolodexEntry{
    private:
        string fName, lName, street, town, state, email;
        long zip;
        short zip, area, exchange, line;
    public:
        RolodexEntry(void): fName(), lName(), street(), town(), state(), zip(),
        szip(), area(), exchange(), line(), email() {}

        RolodexEntry(string fname, string lname): street(), town(), state(""), zip(),
        szip(), area(0), exchange(0), line(0), email() {}

        RolodexEntry(const RolodexEntry & r): fName(r.fName), lName(r.lName) {}

        string getFname() const {return fName;}
}