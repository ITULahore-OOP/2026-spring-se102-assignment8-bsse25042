#include "UniversityMember.h"

UniversityMember :: UniversityMember(string name, int memberID)
{
    // Initialization using the parameters given
    this->name = name;
    this->memberID = memberID;
}

UniversityMember ::  ~UniversityMember()
{

}

string UniversityMember ::  getName()
{
    return name; // returns name
}

int UniversityMember ::  getMemberID()
{
    return memberID; // returns member ID
}