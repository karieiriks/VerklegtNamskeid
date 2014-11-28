#include "personservice.h"

PersonService::PersonService()
{
    personRepo = PersonRepository();
}

void PersonService::add(Person pers)
{
    PersonRepository.add(pers);
}
