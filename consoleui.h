#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <iostream>
#include <string>
#include "personservice.h"
#include "person.h"

class ConsoleUI
{
public:
    ConsoleUI();
    void start();
private:
    PersonService personServ;
    void welcome();
    void add();
    void remove();
    void display();
    void search();
};

#endif // CONSOLEUI_H
