#ifndef MACHINE 
#define MACHINE



class Machine {
    protected:
        const char * type;
        int autonomie;
        int ifixit;

    public:
    Machine();
    Machine(const char *, int=0, int=0);
    ~Machine();
    // getters
    const char * getType() const;
    int getAutonomie() const;
    int getIfixit() const;

};

#endif