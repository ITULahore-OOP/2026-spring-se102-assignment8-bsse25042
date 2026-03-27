#include "Department.h"

// CONSTRUCTOR
Department :: Department(string departmentName)
{
    // Initialization
    this->departmentName = departmentName;
    memberCount = 0;
}

// FUNCTIONAL FUNCTIONS
void Department :: addMember(UniversityMember* member)
{
    members[memberCount] = member; // assigning value to the latest element address
}

void Department :: displayAllRoles()
{
    for(int i=0; i<memberCount; i++) // traversing array
    {
        members[i]->displayRole(); // using member function
    }
}