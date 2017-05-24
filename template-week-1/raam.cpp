#include "raam.hpp"

raam::raam( window & w, int kozijn_top_left_x, int kozijn_top_left_y, int kozijn_bot_right_x, int kozijn_bot_right_y ):
    w( w ),
    kozijn( w, kozijn_top_left_x, kozijn_top_left_y, kozijn_bot_right_x, kozijn_bot_right_y ),
    kozijn_line_hor( w, kozijn_top_left_x, (kozijn_top_left_y + kozijn_bot_right_y) / 2, kozijn_bot_right_x, (kozijn_top_left_y + kozijn_bot_right_y) / 2 ),
    kozijn_line_vert( w, (kozijn_top_left_x + kozijn_bot_right_x) / 2, kozijn_top_left_y, (kozijn_top_left_x + kozijn_bot_right_x) / 2, kozijn_bot_right_y )
    {}

void raam::print() {
    kozijn.print();
    kozijn_line_hor.print();
    kozijn_line_vert.print();
}