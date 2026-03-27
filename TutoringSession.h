#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
#include "Student.h"
#include "TeachingAssistant.h"

class TutoringSession {
    private: // access specifier
        int sessionID;
        double durationMinutes;
        TeachingAssistant* ta;
        Student* student;

    public: // access specifier

        // Contructor
        TutoringSession(int sessionID = 0, double durationMinutes = 0.0, TeachingAssistant* ta = nullptr, Student* student = nullptr);
        
        // Getter function
        double getDuration();

        // Functional Functions
        void displaySession();
        TutoringSession operator+(const TutoringSession& other);
};

// bool operator>(TutoringSession s1, TutoringSession s2); // function definition also commented as already added in test cases

#endif