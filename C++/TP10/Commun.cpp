#include <iostream>

#include "Commun.hpp"

Humanoide::Humanoide(): Humain("Rémy", HOMME, 20)
{
    std::cout << "Création d'un Humanoide" << std::endl;
}


Humanoide::Humanoide(const char * nom, const char * type, sexe genre, int age): Humain(nom,genre,age), Machine(type,0,3){
    std::cout << "Création d'un Humanoide" << std::endl;
}

Humanoide::~Humanoide()
{
    std::cout << "Destruction d'un Humanoide" << std::endl;
}