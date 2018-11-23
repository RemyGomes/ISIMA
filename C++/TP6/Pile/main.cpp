#include <iostream>
#include "Pile.hpp"

using std::cout;
using std::endl;


int main()
{
    Pile p;
    cout << p.empty() << endl;
    cout << (0 == p.size()) << endl;
    Pile p1(10);
    cout << p1.empty() << endl;
    cout << (0 == p1.size()) << endl;
    p1.push(5);
    cout << !p1.empty() << endl;
    cout << (1 == p1.size()) << endl;
    cout << (5 == p1.top()) << endl;

    p1.push(2);
    p1.push(1);

    cout << (3== p1.size()) << endl;
    cout << (1== p1.top()) << endl;

    p1.pop();

    cout << (2 == p1.size()) << endl;
    cout << (2 == p1.top()) << endl;

    p1.pop();
    p1.pop();

    cout << (0 == p.size()) << endl;


    return 0;
}