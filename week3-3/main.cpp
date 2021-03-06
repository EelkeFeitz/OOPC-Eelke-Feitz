#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

int main() {
    window w    ( vector( 128, 64 ), 2 );
    wall top    ( w, vector(   0,  0 ),    vector( 127,  1 ),  true, 100, vector(  1, -1 ) );
    wall right  ( w, vector( 126,  0 ),    vector( 127, 63 ),  true, 100, vector( -1,  1 ) );
    wall bottom ( w, vector(   0, 62 ),    vector( 127, 63 ),  true, 100, vector(  1, -1 ) );
    wall left   ( w, vector(   0,  0 ),    vector(   1, 63 ),  true, 100, vector( -1,  1 ) );
//    wall box    ( w, vector(  10, 10 ),    vector(  20, 20 ),  true,   3, vector(  1,  1 ) );
    victim kill ( w, vector(  100, 10 ),    vector(  120, 50 ), false,      vector(  1,  1 ), false );
    ball b      ( w, vector(  50, 50 ), 9, vector(   5,  2 ) );
    
    drawable * objects[] = { &b, &top, &left, &right, &bottom, /*&box,*/ &kill };
    
    for(;;) {
        w.clear();
        for( auto & p : objects ) {
            p->draw();
        }
        wait_ms( 200 );
        for( auto & p : objects ) {
            p->update();
        }
        for( auto & p : objects ) {
            for( auto & other : objects ) {
                p->interact( *other );
            } 
        }
    }
}