#include "hwlib.hpp"
#include "sam.h"

void change_leds( hwlib::port_out & leds, auto sw1, auto sw2 ) {
    int leds_on = 0;
    for( ; ; ) {
        
        if( !sw1.get() && leds_on < 4 ) {
            // Waits till button is released
            while( !sw1.get() ){
                hwlib::wait_ms( 5 );
            }
            leds_on++;
        }
        if( !sw2.get() && leds_on > 0) {
            // Waits till button is released
            while( !sw2.get() ) {
                hwlib::wait_ms( 5 );
            }
            leds_on--;
        }
        
        if( leds_on == 0 ) {
            hwlib::cout << "0 leds on" << hwlib::endl; 
            leds.set( 0x0 );
        } else if( leds_on == 1 ) {
            hwlib::cout << "1 leds on" << hwlib::endl; 
            leds.set( 0x1 );
        } else if( leds_on == 2 ) {
            hwlib::cout << "2 leds on" << hwlib::endl; 
            leds.set( 0x3 );
        } else if( leds_on == 3 ) {
            hwlib::cout << "3 leds on" << hwlib::endl; 
            leds.set( 0x7 );
        } else if( leds_on == 4 ) { 
            hwlib::cout << "4 leds on" << hwlib::endl; 
            leds.set( 0xf );
        }
        hwlib::wait_ms( 50 );
    }
}

int main( void ) {
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    
    auto led1 = hwlib::target::pin_out( 0, 19 );
    auto led2 = hwlib::target::pin_out( 2, 19 );
    auto led3 = hwlib::target::pin_out( 2, 17 );
    auto led4 = hwlib::target::pin_out( 2, 15 );
    auto sw1 = hwlib::target::pin_in_out( 2, 13 );
    auto sw2 = hwlib::target::pin_in_out( 1, 21 );

    sw1.direction_set_input();
    sw2.direction_set_input();
    
    auto leds = hwlib::port_out_from_pins( led1, led2, led3, led4 );
    
    change_leds( leds, sw1, sw2 );
    
}