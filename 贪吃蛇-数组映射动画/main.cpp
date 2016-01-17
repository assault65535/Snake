#include <iostream>
#include "simulation.h"

using namespace std;

void look(screen scr)
{
    for(int i=ScreenHeight-1;i>=0;i--)
    {
        for(int j=0;j<ScreenWidth;j++)
        {
            if(scr.display(j,i)==0)
                cout<<' ';
            else
                cout<<scr.display(j,i);
        }
        cout<<endl;
    }
}
/**output£ºconsole**/
/**array-console connection function as below.**/

int main()
{


    screen scr;scr.allclr();
    //look(scr);

    object snake(1,1,0,1);
    snake.transfrom_longer();
    snake.transfrom_longer();
    snake.transfrom_longer();
    snake.transfrom_longer();
    scr.setobj(snake,1);
    /**1st frame**/
    look(scr);scr.allclr();

    cout<<"-------------------------------------------------------------------------------"<<endl;
    snake.turn_to(1,0);
    snake.snake_walk();
    scr.setobj(snake,1);
    /**2nd frame**/
    look(scr);scr.allclr();

    cout<<"-------------------------------------------------------------------------------"<<endl;
    object food(5,5,0,0);
    snake.snake_walk();
    scr.setobj(snake,1);
    scr.setobj(food,2);
    /**third frame**/
    look(scr);scr.allclr();

    return 0;
}
