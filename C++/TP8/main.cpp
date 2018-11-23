#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <queue>
#include "ZZ.hpp"

typedef std::vector<ZZ*>  vzzPlus;
// OU en C++ 2011
// using vzz = std::vector<ZZ> ;


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
  }*/

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

  return 0;
}