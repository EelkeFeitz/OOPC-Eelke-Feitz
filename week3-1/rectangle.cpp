// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"
rectangle::rectangle( window & w, const vector & start, const vector & end, const bool filled ):
   drawable( w, start, end - start ),
   start( start ),
   end( end ),
   left(   w, vector( start.x, start.y ), vector( start.x, end.y   ) ),
   right(  w, vector( end.x,   start.y ), vector( end.x,   end.y + 1 ) ),
   top(    w, vector( start.x, start.y ), vector( end.x,   start.y ) ),
   bottom( w, vector( start.x, end.y   ), vector( end.x + 1,   end.y   ) ),
   filled( filled )
{}

void rectangle::draw(){
    if( filled == true ) {
        for( int xCounter = start.x; xCounter < end.x; xCounter++ ) {
            for( int yCounter = start.y; yCounter < end.y; yCounter++ ) {
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