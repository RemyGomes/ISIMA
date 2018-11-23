#ifndef ZZ_CLASS
#define ZZ_CLASS

#include <iostream>


class ZZ {
    std::string nom, prenom;
    double note;
  // …

    public:
    ZZ();
    ZZ(std::string, std::string="Lillian", double=0);
    ~ZZ();
    

    // Operators
    bool operator<(const ZZ&) const;

    // getters & setters
    std::string getNom() const;
    std::string getPrenom() const;
    double getNote() const;

    void setNom(std::string);
    void setPrenom(std::string);
    void setNote(double);
    
};

std::ostream& operator<<(std::ostream&, const ZZ& );

#endif