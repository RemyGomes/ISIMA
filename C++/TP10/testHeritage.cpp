#include <iostream>
using namespace std;
/*class MemePasPeur {
   int tab[4];
 public:
   MemePasPeur() {
      tab[0] = 1;
   }
   const int & val() const {
       return tab[0];
   }
   void modify() {
      tab[0] = 4;
   }
};

int main(int, char **) {
  MemePasPeur * p = new MemePasPeur;
  int i = p->val();
  const int & j = p->val();
  std::cout << i << " " << j << std::endl;
  p->modify();
  std::cout << i << " " << j << std::endl;
  delete p;
  std::cout << i << " " << j << std::endl;
  return 0;
}*/


/*
class Mere {
 public:
  Mere() {
    cout << "Mere::Mere()" << endl;
    tab = new int[100];
  }
  virtual ~Mere() {
    cout << "Mere::~Mere()" << endl;
    delete [] tab;
  }
 protected:
  int * tab;
};

class Fille : public Mere {
 public:
   Fille() {
      cout << "Fille:Fille()" << endl;
      tab = new double[100];
      //Mere::tab[50] = 4;

   }
   ~Fille() {
    cout << "Fille::~Fille()" << endl;
    delete [] tab;

  }
 protected:
  double * tab;
};


*/
class Mere {
 public:
  Mere() { m(); }
  virtual void m() { cout << "mm" << endl; }
  virtual ~Mere() {}
};

class Fille : public Mere {
 public:
  Fille() { m(); }
  virtual void m() { cout << "mf" << endl; }
  virtual ~Fille() {}
};



int main(int, char**) {
  Mere * m = new Fille();
  m->m();
  cout << "penser a valgrind" << endl;
  delete m;

  return 0;
}

