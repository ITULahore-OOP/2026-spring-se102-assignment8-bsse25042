#include "Student.h"

// CONSTRUCTOR 
Student :: Student(string name, int memberID, double cgpa) : UniversityMember(name, memberID)
{
    // Initialization
    this->cgpa = cgpa;
}

// GETTER FUNCTION
double Student ::  getCGPA()
{
    return cgpa; // returning CGPA
}

// FUNCTIONAL FUNCTIONS
void Student ::  updateCGPA(double newCGPA)
{
    cgpa = newCGPA; // updating and assigning new value
}
void Student ::  displayRole()
{
    // Displaying role
    cout<<"Role: Student"<<endl;
}