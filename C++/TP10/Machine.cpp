
#include <iostream>
#include "Machine.hpp"

Machine::Machine()
{
    std::cout << "Creation de la machine" << std::endl;
}

Machine::Machine(const char * type, int autonomie, int ifixit): type(type), autonomie(autonomie), ifixit(ifixit)
{
    std::cout << "Creation de la machine" << std::endl;
}

Machine::~Machine()
{
    std::cout << "Destruction de la machine" << std::endl;
}

const char * Machine::getType() const
{
    return type;
}

int Machine::getAutonomie() const
{
    return autonomie;
}
int Machine::getIfixit() const
{
    return ifixit;
}