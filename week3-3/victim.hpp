#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "rectangle.hpp"

class victim : public rectangle {
public:
    bool hit;
    victim( window & w, const vector & top_left, const vector & bot_right, const bool & filled, const vector & bounce, const bool & hit = true );
    void update() override;
    void interact( drawable & other ) override;
};

#endif // VICTIM_HPP
