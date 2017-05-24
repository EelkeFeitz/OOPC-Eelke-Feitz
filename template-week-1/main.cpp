/* Student: Eelke Feitz
 * Student nummer: 
 * Docent: Jorn Bunk
 * Klas: V1C
 */

#include <iostream>
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "FilledRectangle.hpp"
#include "House.hpp"

int main(int argc, char **argv){
   window w( 270, 70, 2 );
   
   house villa0( w, 10, 20, 60, 60, 0);
   
   house villa1( w, 70, 20, 120, 60, 1);
   
   house villa2( w, 130, 20, 180, 60, 2);
   
   house villa3( w, 190, 20, 240, 60, 3);
   
   FilledRectangle filled_box(w, 250,   20, 260, 60);
   
//   line diagonal_line( w, 5, 5, 30, 40 );
//   diagonal_line.print();
//   
//   rectangle box( w, 20, 10, 30, 20 );
//   box.print();
//   
//   circle ball( w, 70, 30, 20 );
//   ball.print();
   
   return 0;
}
