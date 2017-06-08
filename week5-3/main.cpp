#include "hwlib.hpp"
#include "sam.h"

class pin_out_all : public hwlib::pin_out {
private:
   hwlib::pin_out * list[ 4 ];     
   
public:

   pin_out_all(     
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy 
   ):
      list{ &p0, &p1, &p2, &p3 }
   {}
   
   void set( bool v, hwlib::buffering buf = hwlib::buffering::unbuffered ){
      for( auto p  : list ){
          p->set( v );
      }
   }
};

class pin_out_invert : public hwlib::pin_out {
private:
    hwlib::pin_out & slave;
public:
    pin_out_invert( hwlib::pin_out & slave ):
        slave( slave ) {}
    
    void set( bool x, hwlib::buffering buf = hwlib::buffering::unbuffered) override {
        slave.set( ! x );
    }
};

int main( void ) {
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    
    namespace target = hwlib::target;
    
    //leds
    auto led1 = target::pin_out( 2, 12 );
    auto led2 = target::pin_out( 2, 14 );
    auto led3 = target::pin_out( 2, 16 );
    auto led4 = target::pin_out( 2, 18 );
    pin_out_all standaard_leds( led1, led2, led3, led4 );
    pin_out_invert standaard_leds_inverted( standaard_leds );
    
    //SPI
    auto ds   = target::pin_out( target::pins::d8  );
    auto shcp = target::pin_out( target::pins::d9  );
    auto stcp = target::pin_out( target::pins::d10 );
    auto spi_bus = hwlib::spi_bus_bit_banged_sclk_mosi_miso( stcp, ds, hwlib::pin_in_dummy );
    auto spi_leds = hwlib::hc595( spi_bus, shcp);
    pin_out_all spi_group( spi_leds.p1, spi_leds.p2, spi_leds.p3, spi_leds.p4 );
    
    pin_out_all all_leds( standaard_leds_inverted, spi_group );
    
    blink( all_leds );
}