#ifndef STAFF_H
#define STAFF_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#include "UniversityMember.h"
#include "AccessCard.h"

class Staff : virtual public UniversityMember // using virtual while inheriting to avoid diamond problem
{
    private: // access specifier
        double salary;
        AccessCard card;

    public: // access specifier

        // Constructor
        Staff(string name, int memberID, double salary, AccessCard card);
        
        // Getter function
        double getSalary();

        // Functional functions
        void displayRole() override;
        void displayCard();

};

#endif