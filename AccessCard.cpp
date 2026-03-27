#include "AccessCard.h"

// CONSTRUCTOR
AccessCard :: AccessCard(string cardID, int accessLevel)
{
    // Initialization
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}

// GETTER FUNCTIONS
string AccessCard ::  getCardID()
{
    return cardID; // returnin card ID
}

int AccessCard ::  getAccessLevel()
{
    return accessLevel; // returning Access level
}

// FUNCTIONAL FUNCTIONS
void AccessCard ::  displayCardInfo()
{
    // Displaying all related Information
    cout<<"====[ CARD INFO ]===="<<endl;
    cout<<"CARD ID#: "<<cardID<<endl;
    cout<<"ACCESS LEVEL: "<<accessLevel<<endl;
}