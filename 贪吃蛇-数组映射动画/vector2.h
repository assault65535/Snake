/**vector2.h**/
#ifndef VECTOR2_H_INCLUDED
#define VECTOR2_H_INCLUDED

class vector2
{/**2-dimension vector**/
public:
    int x;
    int y;
    /**data of vector**/

    vector2();
    vector2(int _x,int _y);
    /**give 2 number to a new vector,or simply create a zero vector**/

    vector2 operator +(const vector2 &vec) const;
    vector2 operator-(const vector2 &vec) const;
    int operator*(const vector2 &vec) const;
    /**the addition, subtraction and dot product of vector**/
};

#include "vector2.cpp"

#endif // VECTOR2_H_INCLUDED
