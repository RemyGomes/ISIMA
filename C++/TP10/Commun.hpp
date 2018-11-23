#ifndef HUMANOIDE
#define HUMANOIDE


#include "Humain.hpp"
#include "Machine.hpp"

/*class Humain{};
class Machine{};*/


class Humanoide : public Humain, public Machine {
    private:
        
    public:
        Humanoide();
        Humanoide(const char *, const char *, sexe=RIEN, int=0);
        ~Humanoide();
};

#endif