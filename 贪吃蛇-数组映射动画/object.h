/**object.h**/
#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include <vector>
#include "vector2.h"


using namespace std;

class object
{
    vector<vector2> m_obj;
    /**object: an array noting corresponding points**/

    vector2 m_move_speed;
    /**speed: an 2-dimension vector**/

public:
    object(int start_x,int start_y,int speed_x,int speed_y);
    /**give a start position(start_x,start_y) and a speed(speed_x,speed_y)to an object**/

    int how_long();
    /**return m_obj.size()**/

    int observex(int n);
    /**return m_obj[n].x**/

    int observey(int n);
    /**return m_obj[n].y**/

    void walk();
    /**all points of the object add the vector speed once**/

    void snake_walk();
    /**walk like snake**/

    void transfrom_longer();
    /**snake_walk() once, then lengthen 1 point.**/

    void transfrom_shorter();
    /**decrease 1 point**/

    void turn_to(int x,int y);
    /**turn m_move_speed to(x,y)**/
};

#include "object.cpp"

#endif // OBJECT_H_INCLUDED
