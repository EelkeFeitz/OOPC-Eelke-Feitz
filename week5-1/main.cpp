#include "hwlib.hpp"
#include "sam.h"

void change_leds( hwlib::port_out & leds, auto sw1, auto sw2 ) {
    int leds_on = 0;
    for( ; ; ) {
        
        if( !sw1.get() && leds_on < 8 ) {
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
            leds.set( 0x0 );
        } else if( leds_on == 1 ) {
            leds.set( 0x1 );
        } else if( leds_on == 2 ) {
            leds.set( 0x3 );
        } else if( leds_on == 3 ) {
            leds.set( 0x7 );
        } else if( leds_on == 4 ) {
            leds.set( 0x0f );
        } else if( leds_on == 5 ) {
            leds.set( 0x1f );
        } else if( leds_on == 6 ) {
            leds.set( 0x3f );
        } else if( leds_on == 7 ) {
            leds.set( 0x7f );
        } else if( leds_on == 8 ) {
            leds.set( 0xff);
        }
        
        hwlib::wait_ms( 50 );
    }
}

int main( void ) {
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    
    
    namespace target = hwlib::target;
    
    //leds
    auto led1 = hwlib::target::pin_out( 2, 12 );
    auto led2 = hwlib::target::pin_out( 2, 14 );
    auto led3 = hwlib::target::pin_out( 2, 16 );
    auto led4 = hwlib::target::pin_out( 2, 18 );
    //switches
    auto sw1  = hwlib::target::pin_in_out( 2, 24 );
    auto sw2  = hwlib::target::pin_in_out( 2, 23 );
    //SPI
    auto ds   = hwlib::target::pin_out( target::pins::d8  );
    auto shcp = hwlib::target::pin_out( target::pins::d9  );
    auto stcp = hwlib::target::pin_out( target::pins::d10 );
    auto spi_bus = hwlib::spi_bus_bit_banged_sclk_mosi_miso(
        stcp, ds, hwlib::pin_in_dummy );
    auto spi_leds = hwlib::hc595( spi_bus, shcp);
    
    sw1.direction_set_input();
    sw2.direction_set_input();
    
    auto leds = hwlib::port_out_from_pins( led1, led2, led3, led4, spi_leds.p1, spi_leds.p2, spi_leds.p3, spi_leds.p4 );
    
    change_leds( leds, sw1, sw2 );
    
}