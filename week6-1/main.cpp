#include "hwlib.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "house.hpp"
#include "raam.hpp"
#include "FilledRectangle.hpp"

int main( void ){	
    
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
   
    namespace target = hwlib::target;
   
    auto scl = target::pin_oc( target::pins::scl );
    auto sda = target::pin_oc( target::pins::sda );
   
    auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl,sda );
   
    auto display = hwlib::glcd_oled( i2c_bus, 0x3c );  
    
    house villa3( display, 10, 20, 60, 60, 3);
    
    display.clear();
    for( uint16_t i = 10; i < display.size.x - 10; i++ ) {
        villa3.print();
    }
}
