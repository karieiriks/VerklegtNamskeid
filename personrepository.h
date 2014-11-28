#ifndef PERSONREPOSITORY_H
#define PERSONREPOSITORY_H

#include <vector>
#include "person.h"

class PersonRepository
{
public:
    PersonRepository();
    void add(Person pers);
private:
    std::vector<Person> personVector;
};

#endif // PERSONREPOSITORY_H
