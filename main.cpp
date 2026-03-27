#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main()
{
    // Initialize access cards with different security levels
    AccessCard card1("AC-001", 1);
    AccessCard card2("AC-002", 2);
    AccessCard taCard("AC-TA1", 2);

    // Initialize student records
    Student student1("Alice", 101, 3.8);
    Student student2("Bob", 102, 3.5);

    // Initialize staff records with their access cards
    Staff staffMember1("Dr Smith", 201, 75000, card1);
    Staff staffMember2("Mr Jones", 202, 60000, card2);

    // Initialize teaching assistant (multiple inheritance example)
    TeachingAssistant teachingAsst("Charlie", 301, 3.9, 20000, taCard, 15);

    // Setup department and register all members
    Department dept("CS");
    dept.addMember(&student1);
    dept.addMember(&student2);
    dept.addMember(&staffMember1);
    dept.addMember(&staffMember2);
    dept.addMember(&teachingAsst);

    // Setup tutoring sessions between TA and students
    TutoringSession sessionA(1, 45, &teachingAsst, &student1);
    TutoringSession sessionB(2, 30, &teachingAsst, &student2);

    int userSelection;

    // Interactive menu loop
    do
    {
        // Display main menu with options
        cout << "\n========================================" << endl;
        cout << "|         UNIVERSITY SYSTEM           |" << endl;
        cout << "========================================" << endl;
        cout << "| 1. Display All Member Roles         |" << endl;
        cout << "| 2. Show Tutoring Sessions           |" << endl;
        cout << "| 3. Combine Tutoring Sessions        |" << endl;
        cout << "| 4. Submit Assignment Grade          |" << endl;
        cout << "| 5. Quit Application                 |" << endl;
        cout << "========================================" << endl;
        cout << "Please select an option (1-5): ";
        cin >> userSelection;

        // Handle display roles option
        if (userSelection == 1)
        {
            dept.displayAllRoles();
        }
        
        // Handle display sessions option
        else if (userSelection == 2)
        {
            sessionA.displaySession();
            sessionB.displaySession();
        }
        
        // Handle merge sessions option
        else if (userSelection == 3)
        {
            TutoringSession combinedSession = sessionA + sessionB;
            cout << "Combined session duration: " << combinedSession.getDuration() << " minutes" << endl;
        }
        
        // Handle grade submission option
        else if (userSelection == 4)
        {
            int numericScore;
            cout << "Enter assignment score (0-100): ";
            cin >> numericScore;
            teachingAsst.gradeAssignment(numericScore);
        }

    } while (userSelection != 5);

    return 0;
}