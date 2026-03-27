#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class UniversityMember {
    private: // access specifier
		string name;
		int memberID;

    public: // access specifier

        // Contructor
		UniversityMember(string name = "", int memberID = 0);

		// Destructor
		virtual ~UniversityMember();

		// Getter functions
		string getName();
		int getMemberID();

		// Abstract Function
		virtual void displayRole() = 0; 
};

#endif