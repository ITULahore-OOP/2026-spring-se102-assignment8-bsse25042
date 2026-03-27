#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#include "UniversityMember.h"

class Student : virtual public UniversityMember // using virtual while inheriting to avoid the diamond problem
{
    private: // access specifier
        double cgpa;
    
    public: // access specifier

        // Contructor
        Student(string name = "", int memberID = 0, double cgpa = 0.0);
        
        // Getter function
        double getCGPA();

        // Functional Functions
        void updateCGPA(double newCGPA);
        void displayRole() override;
};

#endif