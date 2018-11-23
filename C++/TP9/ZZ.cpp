#include "ZZ.hpp"

using namespace std;

ZZ::ZZ(): nom("Gomes"), prenom("Rémy"), note(20)
{
    //cout << "Création d'un Rémy ! " << endl;
}

ZZ::ZZ(string nom, string prenom, double note): nom(nom), prenom(prenom), note(note)
{
    //cout << "Création d'un ZZ ! " << endl;
}

ZZ::~ZZ()
{
    //cout << "Destruction d'un ZZ" << endl;
}





// OPERATORS
/*bool ZZ::operator<(const ZZ& zz) const
{
    return this->note < zz.note;
}*/
// Tri en fonction de la note est du nom;
bool ZZ::operator<(const ZZ& zz) const
{
    string nomprenom = this->nom + this->prenom;
    string compared = zz.nom + zz.prenom;
    bool res;
    if(compared.compare(nomprenom)>0){
        res = false; 
    }
    else if(compared.compare(nomprenom) <=0){
        res = true;
    }
    return res;
}


std::ostream& operator<<(std::ostream &o, const ZZ &zz )
{
    o << zz.getNom() << " " << zz.getPrenom() << " " << zz.getNote() << endl;
    return o; 
}


// GETTERS ET SETTERS

string ZZ::getNom() const{ return nom; }
string ZZ::getPrenom() const { return prenom; }
double ZZ::getNote() const { return note; }

void ZZ::setNom(string nom1) { nom = nom1; }
void ZZ::setPrenom(string prenom1) { prenom = prenom1; }
void ZZ::setNote(double note1) { note = note1; }
