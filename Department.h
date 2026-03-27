#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#include "UniversityMember.h"

class Department
{
    private: // access specifier
        string departmentName;
        UniversityMember* members[50];
        int memberCount;

    public: // access specifier

        // Contructor
        Department(string departmentName = "");
        
        // Functional Functions
        void addMember(UniversityMember* member);
        void displayAllRoles();
};

#endif