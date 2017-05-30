#include "hwlib.hpp"
#include "sam.h"

int main( void ) {
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    
    // make the GPIO pin an output
    auto led1 = hwlib::target::pin_in_out( 2, 17 );
    auto led2 = hwlib::target::pin_in_out( 2, 15 );
    auto led3 = hwlib::target::pin_in_out( 2, 13 );
    auto led4 = hwlib::target::pin_in_out( 1, 21 );
    led1.direction_set_output();
    led2.direction_set_output();
    led3.direction_set_output();
    led4.direction_set_output();
    
    led1.set( 1 );
    led2.set( 1 );     //1,2
    
    for( ; ; ) {
        
        hwlib::wait_ms( 1000 );
        led1.set( 0 );
        led3.set( 1 ); //2,3
        hwlib::wait_ms( 1000 );
        led2.set( 0 );
        led4.set( 1 ); //3,4
        hwlib::wait_ms( 1000 );
        led4.set( 0 ); 
        led2.set( 1 ); //3,2
        hwlib::wait_ms( 1000 );
        led3.set( 0 );
        led1.set( 1 ); //2,1
    }
}