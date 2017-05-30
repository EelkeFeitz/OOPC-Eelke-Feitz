#include "wall.hpp"

wall::wall( window & w, const vector & top_left, const vector & bot_right , const bool filled, const int & updateFrequency, const vector & bounce ):
    rectangle( w, top_left, bot_right, filled, bounce ),
    updateFrequency( updateFrequency )
    {}

void wall::update() {
    if( updateCounter++ == updateFrequency ) {
        updateCounter = 0;
        if( filled == true ) {
            filled = false;
        } else {
            filled = true;
        }
    }
}