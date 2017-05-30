// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle( window & w, const vector & top_left, const vector & bot_right, const bool & filled, const vector & bounce ):
   drawable( w, top_left, bot_right - top_left, bounce ),
   left(   w, vector( top_left.x, top_left.y ),  vector( top_left.x, bot_right.y   ) ),
   right(  w, vector( bot_right.x, top_left.y ), vector( bot_right.x,   bot_right.y + 1 ) ),
   top(    w, vector( top_left.x, top_left.y ),  vector( bot_right.x,   top_left.y ) ),
   bottom( w, vector( top_left.x, bot_right.y ), vector( bot_right.x + 1,   bot_right.y   ) ),
   top_left( top_left ),
   bot_right( bot_right ),
   filled( filled )

{}

void rectangle::draw(){
    if( filled == true ) {
        for( int xCounter = top_left.x; xCounter < bot_right.x; xCounter++ ) {
            for( int yCounter = top_left.y; yCounter < bot_right.y; yCounter++ ) {
                w.draw( vector( xCounter, yCounter ) );
            }
        }
    }
    else {
        left.draw();
        right.draw();
        top.draw();
        bottom.draw();
    }
}