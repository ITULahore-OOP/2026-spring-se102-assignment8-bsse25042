#include "TeachingAssistant.h"

// CONSTRUCTOR
TeachingAssistant :: TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours) : Student(name, memberID, cgpa), Staff(name, memberID, salary, card), UniversityMember(name, memberID)
{
    // Initialization
    this->workingHours = workingHours;
}

// FUNCTIONAL FUNCTIONS
void TeachingAssistant :: displayRole()
{
    // Displaying Role
    cout<<"Role: Teaching Assistant"<<endl;
}

void TeachingAssistant :: gradeAssignment(int score)
{
    // Displaying Score
    cout<<"numeric score: "<<score<<"/100"<<endl;
}

void TeachingAssistant :: gradeAssignment(string letterGrade)
{
    // Displaying Grade
    cout<<"letter grade: "<<letterGrade<<endl;
}