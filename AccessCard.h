#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class AccessCard {
    private: // access specifier
        string cardID;
        int accessLevel;

    public: // access specifier

        // Contructor
        AccessCard(string cardID = "", int accessLevel = 0);
        
        // Getter functions
        string getCardID();
        int getAccessLevel();

        // Functional Functions
    	void displayCardInfo();
};

#endif