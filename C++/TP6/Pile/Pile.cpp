#include <iostream>
#include "Pile.hpp"
#include <sstream>
#include <stdexcept>
using std::cout;
using std::endl;


Pile::Pile(int cap) : capacite(cap), taille(0) {
    tab = new int[capacite];
}

Pile::~Pile(){
    delete [] tab;
    cout << "Au revoir la pile" << endl;
}

Pile& Pile::operator=(const Pile &p){
    if(&p != this)
    {
        delete [] tab;
        capacite = p.capacite;
        if(capacite){
            try {
                tab = new int[capacite];
                for(int i=0;i<p.capacite;i++) {
                    tab[i] = p.tab[i];
                }
            } catch (std::bad_alloc &e) {
                std::cerr << e.what() ;
            }
        }
        else {
            tab = nullptr;
        }
    }
    return *this;
}

int Pile::pop(){
    return tab[--taille];
}

void Pile::push(int elt){
    tab[taille] = elt;
    taille++;
}

int Pile::empty(){
    return taille==0;
}

int Pile::full(){
    return (taille-1)==capacite;
}

int Pile::top(){
    return tab[taille -1];
}

int Pile::size(){
    return taille;
}