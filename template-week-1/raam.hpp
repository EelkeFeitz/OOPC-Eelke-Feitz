#ifndef RAAM_HPP
#define RAAM_HPP

#include "rectangle.hpp"
#include "line.hpp"

class raam {
private:
    rectangle kozijn;
    line kozijn_line_hor, kozijn_line_vert;
    window & w;
public:
    raam( window & w, int kozijn_top_left_x, int kozijn_top_left_y, int kozijn_bot_right_x, int kozijn_bot_right_y );
    void print();
};

#endif // RAAM_HPP
