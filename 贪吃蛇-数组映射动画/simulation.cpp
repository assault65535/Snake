#include "simulation.h"

bool screen::setpt(int x,int y,int n)
{
    if(x>=0 && y>=0 && x<ScreenWidth && y<ScreenWidth)
    {
        if(m_borad[x][y]==0)
        {
            m_borad[x][y]=n;
            return true;
        }
    }
    return false;
}

bool screen::setobj(object obj,int n)
{
    int len=obj.how_long();
    for(int i=0;i<len;i++)
    {
        if(setpt(obj.observex(i),obj.observey(i),n))
            continue;
        else
            return false;
    }
    return true;
}

int screen::display(int x,int y)
{
    return m_borad[x][y];
}

void screen::allclr()
{
    memset(m_borad,0,sizeof(m_borad));
}
