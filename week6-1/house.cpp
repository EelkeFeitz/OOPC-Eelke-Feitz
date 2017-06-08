#include "house.hpp"

house::house( hwlib::window & w, int house_top_left_x, int house_top_left_y, int house_bot_right_x, int house_bot_right_y, int aantalRamen ):
    w( w ),
    building( w, house_top_left_x, house_top_left_y, house_bot_right_x, house_bot_right_y ),
    door( w, house_bot_right_x - 10, house_bot_right_y - 15, house_bot_right_x, house_bot_right_y ),
    doorHandle (w, house_bot_right_x - 10, house_bot_right_y - 8, house_bot_right_x - 6, house_bot_right_y - 8 ),
    roof_left( w, house_top_left_x, house_top_left_y, (house_top_left_x + house_bot_right_x) / 2 + 1, house_top_left_y - 10 ),
    roof_right( w, house_bot_right_x, house_top_left_y, (house_top_left_x + house_bot_right_x) / 2, house_top_left_y - 10 ),
    aantalRamen( aantalRamen ),
    raamKozijn1( w, house_top_left_x + 5, house_top_left_y + 5, house_top_left_x + 15, house_top_left_y + 15),
    raamKozijn2( w, house_top_left_x + 20, house_top_left_y + 5, house_top_left_x + 30, house_top_left_y + 15),
    raamKozijn3( w, house_top_left_x + 35, house_top_left_y + 5, house_top_left_x + 45, house_top_left_y + 15)
    {}

void house::print() {
    building.print();
    door.print();
    doorHandle.print();
    roof_left.print();
    roof_right.print();
    if(aantalRamen >= 1) 
        raamKozijn1.print();
    if(aantalRamen >= 2) 
        raamKozijn2.print();
    if(aantalRamen >= 3) 
        raamKozijn3.print();
}