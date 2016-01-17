/**simulation.h**/
#ifndef SIMULATION_H_INCLUDED
#define SIMULATION_H_INCLUDED

#include <cstring>
#include "object.h"

#define ScreenWidth 30
#define ScreenHeight 30

using namespace std;

class screen
{
    int m_borad[ScreenWidth][ScreenHeight];
    /**screen: a 2-dimension array**/

public:
    bool setpt(int x,int y,int n);
    /**turn m_borad[x][y] to n**/

    bool setobj(object obj,int n);
    /**turn corresponding points to n**/

    void allclr();
    /**memset(m_borad,0,sizeof(m_borad)**/

    int display(int x,int y);
    /**return m_borad[x][y]**/
};

#include "simulation.cpp"

#endif // SIMULATION_H_INCLUDED
