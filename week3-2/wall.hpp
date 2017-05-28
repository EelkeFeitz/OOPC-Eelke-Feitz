#ifndef WALL_HPP
#define WALL_HPP

#include "window.hpp"
#include "rectangle.hpp"
#include "vector.hpp"

class wall : public rectangle {
private:
    vector top_left;
    vector bot_right;
    int updateCounter = 0;
public:
    int updateFrequency;
    wall( window & w, const vector & top_left , const vector & bot_right, const bool filled, const int & updateFrequency, const vector & bounce );
    void update() override;
};

#endif // WALL_HPP
