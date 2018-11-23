#include <iostream>
#include "PileGen.hpp"


using std::cout;
using std::endl;

int main(int, char**)
{
    int a = 10, b = 15;
    cout << maximum(a,b) << endl;

    int c = 10;
    double d = 15;
    //cout << maximum(c,d);

    cout << maximum(c,(int) d) << endl;

    typedef PileGen<int> PileEntiers;

    PileEntiers p;
    p.push(10);
    p.push(30);

    while(!p.empty()) {
        cout << p.top() << endl;
        p.pop();
    }


    return 0;
}