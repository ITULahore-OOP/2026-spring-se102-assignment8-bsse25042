#include "Staff.h"

// CONSTRUCTOR
Staff :: Staff(string name, int memberID, double salary, AccessCard card) : UniversityMember(name, memberID)
{
    // Initialization
    this->salary = salary;
    this->card = card;
}

// GETTER FUNCTIONS
double Staff :: getSalary()
{
    return salary; // returning salary
}

// FUNCTIONAL FUNCTIONS
void Staff :: displayRole()
{
    // Displaying
    cout<<"Role: Staff"<<endl;
}

void Staff :: displayCard()
{
    // Displaying
    card.displayCardInfo();
}