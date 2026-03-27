#include "TutoringSession.h"

// CONSTRUCTOR
TutoringSession :: TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student)
{
    // Initialization
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

// GETTER FUNCTION
double TutoringSession :: getDuration()
{
    return durationMinutes; // returning duration in minutes
}

// FUNCTIONAL FUNCTIONS
void TutoringSession :: displaySession()
{
    // Displaying
    cout<<"=====[ SESSION ]====="<<endl;
    cout<<"SESSION ID#: "<<sessionID<<endl;
    cout<<"DURATION - Mins: "<<durationMinutes<<endl;
}

// OPERATOR OVERLOAING
TutoringSession TutoringSession :: operator+(const TutoringSession& other)
{
    TutoringSession s; // new object of class type
    s.durationMinutes = durationMinutes + other.durationMinutes; // accessing attribute using . operator and assigning values
    return s;
}

// ALREADY WRITTEN IN THE TEST FILE (WORKS PERFECTLY ACCORDING TO LOGIC)
// OPERATOR OVERLOADING
// bool operator>(TutoringSession s1, TutoringSession s2)
// {
//     if(s1.getDuration() > s2.getDuration())
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }