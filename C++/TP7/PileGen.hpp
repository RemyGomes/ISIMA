#ifndef PILEGEN
#define PILEGEN


#include <iostream>

template <typename T>
const T& maximum(const T&a, const T&b) {
    return ((a > b) ? a : b);
}


// Pile générique
template<typename T>
class PileGen {
    int capacite;
    int taille;
    T * tab;

    public:
        PileGen(int = 20);
        ~PileGen();
        PileGen& operator=(const PileGen&);
        T pop();
        void push(T);
        const T& top();
        bool empty();
        bool full();
        int size();

};

template<typename T>
PileGen<T>::PileGen(int cap) : capacite(cap), taille(0) {
    tab = new T[capacite];
}

template<typename T>
PileGen<T>::~PileGen(){
    delete [] tab;
    std::cout << "Au revoir la pile" << std::endl;
}

template<typename T>
PileGen<T>& PileGen<T>::operator=(const PileGen &p){
    if(&p != this)
    {
        delete [] tab;
        capacite = p.capacite;
        if(capacite){
            try {
                tab = new T[capacite];
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

template<typename T>
T PileGen<T>::pop(){
    return tab[--taille];
}

template<typename T>
void PileGen<T>::push(T elt){
    tab[taille] = elt;
    taille++;
}

template<typename T>
bool PileGen<T>::empty(){
    return taille==0;
}

template<typename T>
bool PileGen<T>::full(){
    return (taille-1)==capacite;
}

template<typename T>
const T& PileGen<T>::top(){
    return tab[taille -1];
}

template<typename T>
int PileGen<T>::size(){
    return taille;
}












#endif