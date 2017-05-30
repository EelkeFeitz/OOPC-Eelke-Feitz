#include "victim.hpp"
#include "window.hpp"

victim::victim( window & w, const vector & top_left, const vector & bot_right, const bool & filled, const vector & bounce, const bool & hit ):
    rectangle( w, top_left, bot_right, filled, bounce ),
    hit( hit )
{}

void victim::update() {
    if( hit == true ) {
        filled = true;
        if( top_left.x <= bot_right.x ) {
            top_left.x = top_left.x + 1 ;
            bot_right.x = bot_right.x - 1;
        }
        if( top_left.y <= bot_right.y ) {
            top_left.y = top_left.y + 1;
            bot_right.y = bot_right.y -1;
        }
    }
}

void victim::interact( drawable & other ) {
    if( this != & other) {
        if( overlaps( other )) {
            hit = true;
        }
    }
}