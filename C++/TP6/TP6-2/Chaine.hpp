#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {
    int capacite;
    char * tab;

    public:
        Chaine();
        Chaine(int);
        Chaine(const char *);
        Chaine(const Chaine &);
        ~Chaine();
        Chaine & operator=(const Chaine &);
        int getCapacite() const;
        char * c_str() const;
        void afficher() const;
        void afficher(std::ostream &) const;
        char operator[](int) const;
};
std::ostream& operator<<(std::ostream &, const Chaine &);

#endif
