#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#include "AccessCard.h"
#include "Staff.h"
#include "Student.h"

class TeachingAssistant : public Student, public Staff
{
    private: // access specifier
    	int workingHours;

    public: // access specifier

        // Contructor
        TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
        
        // Functional Functions
        void displayRole() override;
        void gradeAssignment(int score);
        void gradeAssignment(string letterGrade);
};

#endif