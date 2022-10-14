
#include <iostream>
#include "circle.hpp"
#include <math.h>

uint8_t x_lim = 250;
uint8_t y_lim = 100;
uint8_t radius = 30;

int main()
{

    draw_circle(50,50);
    return 0;
}

void draw_circle(uint8_t x, uint8_t y)
{   auto distance{0};
    if(((x + radius) > x_lim) || ((y + radius) > y_lim) )
    {
        std::cout<<"out of range boundaries" << std::endl;
        return;
    }

    for(auto loop1_i{0}; loop1_i < x_lim; loop1_i++)
    {
        for(auto loop2_i{0}; loop2_i< y_lim; loop2_i++)
        {
            distance = sqrt(std::pow(loop1_i - x,2) + std::pow(loop2_i - y,2));
            if(distance <= radius)
            {
                std::cout<<'*';
            }
            else
            {
                std::cout<<' ';
            }
        }   
        std::cout<<std::endl;
    }

}