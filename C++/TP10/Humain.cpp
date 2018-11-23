
#include <iostream>
#include "Humain.hpp"

Humain::Humain(): nom("Rémy"), genre(HOMME), age(20)
{
    std::cout << "Création d'un humain" << std::endl;
}

Humain::Humain(const char* nom, sexe genre, int age): nom(nom), genre(genre), age(age)
{
    std::cout << "Création d'un humain type" << std::endl;
}

Humain::~Humain()
{
    std::cout << "Humain tué" << std::endl;
}

//Setters
void Humain::setNom(const char * name)
{
    nom = name;
}
void Humain::setGenre(sexe gen)
{
    genre = gen;
}
void Humain::setAge(int a)
{
    age = a;
}
//Getters
const char * Humain::getNom() const
{
    return nom;
}
sexe Humain::getGenre() const
{
    return genre;
}
int Humain::getAge() const
{
    return age;
}