#ifndef FILLEDRECTANGLE_HPP
#define FILLEDRECTANGLE_HPP

#include "FilledRectangle.hpp"
#include "hwlib.hpp"

class FilledRectangle {
private:
    int top_left_x;
    int top_left_y;
    int bot_right_x;
    int bot_right_y;
    hwlib::window & w;
public:
    FilledRectangle( hwlib::window & w, int top_left_x, int top_left_y, int bot_right_x, int bot_right_y):
        top_left_x( top_left_x ),
        top_left_y( top_left_y ),
        bot_right_x( bot_right_x ),
        bot_right_y( bot_right_y ),
        w( w )
    {print();}
    void print();
};

#endif // FILLEDRECTANGLE_HPP
