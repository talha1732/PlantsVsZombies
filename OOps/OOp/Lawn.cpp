#include "Lawn.h"

Lawn::Lawn()
{
    //ctor
}

Lawn::~Lawn()
{
    //dtor
}

void Lawn::set_Lawn(SDL_Renderer* r)
{
    gRenderer = r;
    x_Lawn = 13;
    y_Lawn = 105;
    for (int i=0; i<5; i++)
        {
            for (int j=0; j<9; j++)
            {
                lawn_Tiles[i][j].set_Coords(gRenderer,x_Lawn,y_Lawn,144,128);
                lawn_Tiles[i][j].lawn_Occupied = false;
                x_Lawn = x_Lawn + 144;

            }
            x_Lawn = 13;
            y_Lawn = y_Lawn + 128;
        }
}

Region* Lawn::ret_tile()
{

}