#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "house.hpp"
#include "rectangle.hpp"
#include "line.hpp"
#include "raam.hpp"


class house {
private:
    hwlib::window & w;
    rectangle building, door;
    line doorHandle, roof_left, roof_right;
    int aantalRamen;
    raam raamKozijn1, raamKozijn2, raamKozijn3;
public:
    house( hwlib::window & w, int house_top_left_x, int house_top_left_y, int house_bot_right_x, int house_bot_right_y, int aantalRamen );
    void print();
};

#endif // HOUSE_HPP 