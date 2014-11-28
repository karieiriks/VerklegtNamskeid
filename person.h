#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
    Person();
private:
    std::string name;
    std::string gender;
    int dateOfBirth;
    int dateOfDeath;
};

#endif // PERSON_H
