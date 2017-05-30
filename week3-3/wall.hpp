#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"

class wall : public rectangle {
private:
    int updateCounter = 0;
public:
    int updateFrequency;
    wall( window & w, const vector & top_left , const vector & bot_right, const bool filled, const int & updateFrequency, const vector & bounce);
    void update() override;
};

#endif // WALL_HPP
