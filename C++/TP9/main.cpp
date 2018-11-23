#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include "ZZ.hpp"
#include <iostream>
#include <ctime>

using namespace std;
//typedef vector<ZZ*>  vzzPlus;
// OU en C++ 2011
// using vzz = std::vector<ZZ> ;

void rand_0_100()
{
  for(int i=0;i<20;i++){
    srand(static_cast<unsigned int>(time(0)));
    cout << (rand() % 101) << endl;
  }

}


int main (int, char **) {

  /*std::vector<int> v;
  int input;

  while (std::cin >> input)
    v.push_back (input);

  std::sort(v.begin(), v.end());

  std::copy (v.begin(), v.end(),
    std::ostream_iterator<int> (std::cout, "\n"));

    std::cout << "Affichage 1 " << std::endl;
    for(unsigned int i = 0; i< v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    std::cout << "Affichage 2" << std::endl;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << std::endl; 
    } 

    std::cout << "Affichage 3" << std::endl;
    for (int& e : v) {
        std::cout << e << std::endl;
   // a faire
   // on peut meme oublier le type "int" avec un mot-clé spécial ..
   // mais c'est une autre histoire !
    }
    */

/*

  vzz zz;

  zz.push_back(ZZ("Legourd"));
  zz.push_back(ZZ("Legourd1"));
  zz.push_back(ZZ("Legourd2"));
  // il faut mettre des elements
  // zz.push_back(ZZ(...));

  std::priority_queue<ZZ> tri;

  for(vzz::iterator it = zz.begin();
      it!=zz.end(); ++it)
  tri.push(*it);

  while(!tri.empty()) {
    std::cout << tri.top() << " ";
    tri.pop();
  }

  ZZ zz2;
  ZZ zz1("Legourd");
   
  if (zz2 < zz1)
  {
    std::cout << zz1;
  }
  else 
  {
    std::cout << zz2;
  }

  vzzPlus zz;
  ZZ * un = new ZZ();
  ZZ * deux = new ZZ("hello");
  zz.push_back(deux);
  zz.push_back(un);
  zz.clear();

  for(int i =0; i< zz.size(); i++)
  {
    std::cout << *zz[i] << std::endl;
  }
  */
  typedef vector<ZZ>  vzz;
  // OU en C++ 2011
  // using vzz = std::vector<ZZ> ;

  vzz zz;

  // il faut mettre des elements
  // zz.push_back(ZZ(...));
  zz.push_back(ZZ("nomz", "prenom", 20));
  zz.push_back(ZZ("nome", "prenom", 19));
  zz.push_back(ZZ("nomf", "preno", 18));
  zz.push_back(ZZ("nomfe", "pren", 17));
  zz.push_back(ZZ("nomfeza", "pre", 16));
  zz.push_back(ZZ("nomfez", "pren", 20));
  zz.push_back(ZZ("nomk", "prenom", 20));
  zz.push_back(ZZ("noml", "prenom", 20));
  zz.push_back(ZZ("roque", "alexis", 20));
  zz.push_back(ZZ("feracci", "antoine", 20));
  zz.push_back(ZZ("monuz", "benoit", 20));
  zz.push_back(ZZ("royer", "jules", 20));



  priority_queue<ZZ> tri;

  for(vzz::iterator it = zz.begin();
      it!=zz.end(); ++it)
  tri.push(*it);



  while(!tri.empty()) {
    cout << tri.top() << "";
    tri.pop();
  }


  ZZ zz54("coucou","coucou",15), zz55("coucou","coucou",16);
  CompareZZ cmp;
  cout << cmp(zz54,zz55)<< endl;
/*
  zz.push_back(ZZ("nom", "prenom", 20));
  zz.push_back(ZZ("nom1", "prenom1", 19));
  zz.push_back(ZZ("nom2", "prenom2", 18));
  zz.push_back(ZZ("nom3", "prenom3", 17));
  zz.push_back(ZZ("nom4", "prenom4", 16));
  zz.push_back(ZZ("nom", "prenom2", 20));
  zz.push_back(ZZ("nom", "prenom5", 20));
  zz.push_back(ZZ("nom", "prenom45", 20));
  zz.push_back(ZZ("roque", "alexis", 20));
  zz.push_back(ZZ("feracci", "antoine", 20));
  zz.push_back(ZZ("monuz", "benoit", 20));
  zz.push_back(ZZ("royer", "jules", 20));
  set<ZZ,CompareZZ> s1;
  priority_queue<ZZ,vzz,CompareZZ> tri2;
  
  for(vzz::iterator it = zz.begin();
      it!=zz.end(); ++it)
  tri2.push(*it);



  while(!tri2.empty()) {
    cout << tri2.top() << "";
    tri2.pop();
  }*/


  rand_0_100();

  return 0;
}