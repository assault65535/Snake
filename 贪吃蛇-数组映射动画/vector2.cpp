#include "vector2.h"

vector2::vector2()
{
    x=y=0;
}

vector2::vector2(int _x,int _y)
{
    x=_x;
    y=_y;
}

vector2  vector2::operator +(const vector2 &vec) const
{
    vector2 ans(0,0);
    ans.x=x+vec.x;
    ans.y=y+vec.y;
    return ans;
}

vector2 vector2::operator-(const vector2 &vec) const
{
    vector2 ans(0,0);
    ans.x=x-vec.x;
    ans.y=y-vec.y;
    return ans;
}

int vector2::operator*(const vector2 &vec) const
{
    int ans;
    ans=x*vec.x+y*vec.y;
    return ans;
}
