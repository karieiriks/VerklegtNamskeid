#include "consoleui.h"

ConsoleUI::ConsoleUI()
{
    personServ = PersonService();
}

void ConsoleUI::start()
{
    welcome();

    std::string inp;

    std::cin >> inp;
    if(inp == "add")
    {
        add();
    }
    else if(inp == "search")
    {
        search();
    }
    else if(inp == "remove")
    {
        remove();
    }

}

void ConsoleUI::welcome()
{
    std::cout << "Welcome \nThe commands are: display, add, remove and search\n";
}

void ConsoleUI::add()
{
    std::cout << "Type in the name, gender, date of birth and date of death\n";

    PersonService.add();
}

void ConsoleUI::search()
{
    std::cout << "Type in the following number to search by the \n1. Name\n2. Gender\n3. Date of birth\n4. Date of death\n";
}

void ConsoleUI::remove()
{
    std::cout << "Search for the person you wish to remove";
}
