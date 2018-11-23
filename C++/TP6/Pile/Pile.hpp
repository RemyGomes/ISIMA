#ifndef PILE
#define PILE

#include <iostream>

class Pile {
    int capacite;
    int taille;
    int * tab;

    public:
        Pile(int = 20);
        ~Pile();
        Pile& operator=(const Pile&);
        int pop();
        void push(int);
        int top();
        int empty();
        int full();
        int size();

        
};













#endif