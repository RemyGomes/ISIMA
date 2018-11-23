#ifndef HUMAIN 
#define HUMAIN


enum sexe { HOMME, FEMME, RIEN };
class Humain {
    
    protected:
        const char * nom;
        sexe genre;
        int age;


    public:
        Humain();
        Humain(const char *, sexe=RIEN, int=0);
        ~Humain();



        // Setters
        void setNom(const char *);
        void setGenre(sexe);
        void setAge(int);

        // Getters
        const char * getNom() const;
        sexe getGenre() const;
        int getAge() const;
};

#endif