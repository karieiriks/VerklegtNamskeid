#ifndef PERSONSERVICE_H
#define PERSONSERVICE_H

#include "person.h"
#include "personRepository.h"

class PersonService
{
public:
    PersonService();
    void add(Person per);
private:
    PersonRepository personRepo;
};

#endif // PERSONSERVICE_H
