#include "object.h"

object::object(int start_x,int start_y,int speed_x,int speed_y)
{
    vector2 poi(start_x,start_y);
    m_obj.push_back(poi);
    poi.x=speed_x;
    poi.y=speed_y;
    m_move_speed=poi;
}

int object::how_long()
{
    return m_obj.size();
}

int object::observex(int n)
{
    return m_obj[n].x;
}

int object::observey(int n)
{
    return m_obj[n].y;
}

void object::walk()
{
    int len=m_obj.size();
    for(int i=0;i<len;i++)
        m_obj[i]=m_obj[i]+m_move_speed;
}

void object::snake_walk()
{
    if(m_move_speed.x==0 && m_move_speed.y==0)
        return;

    vector2 ita; /**¦Ç**/
    if(m_move_speed.x==0)
        ita.x=0;
    else if(m_move_speed.x>0)
        ita.x=1;
    else
        ita.x=-1;

    if(m_move_speed.y==0)
        ita.y=0;
    else if(m_move_speed.y>0)
        ita.y=1;
    else
        ita.y=-1;

    int len=m_obj.size();
    vector2 prev=m_obj[0],temp;
    m_obj[0]=m_obj[0]+ita;

    for(int i=1;i<len;i++)
    {
        temp=m_obj[i];
        m_obj[i]=prev;
        prev=temp;
    }
}

void object::transfrom_longer()
{
    if(m_move_speed.x==0 && m_move_speed.y==0)
        return;

    int len=m_obj.size();
    vector2 prev=m_obj[len-1];

    object::snake_walk();

    m_obj.push_back(prev);
}

void object::transfrom_shorter()
{
    if(m_obj.size()<=1)
        return;
    m_obj.erase(m_obj.end());
}

void object::turn_to(int x,int y)
{
    vector2 new_move_speed(x,y);
    m_move_speed=new_move_speed;
}
