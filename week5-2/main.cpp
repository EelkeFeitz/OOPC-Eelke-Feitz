#include "hwlib.hpp"

class and_gate : public hwlib::pin_in {
private: 
    hwlib::pin_in & slave0;
    hwlib::pin_in & slave1;
public:
    and_gate( hwlib::pin_in & slave0, hwlib::pin_in & slave1 ):
        slave0( slave0 ), slave1( slave1 ) {}
    
    bool get( hwlib::buffering buf = hwlib::buffering::unbuffered ) override {
        return( !( slave0.get() || slave1.get() ) );
    }
};

int main( void ) {
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    
    namespace target = hwlib::target;
    
    //leds
    auto led = hwlib::target::pin_out( 2, 12 );
    auto sw1  = hwlib::target::pin_in( 2, 24 );
    auto sw2  = hwlib::target::pin_in( 2, 23 );
    //switches
    
    and_gate gate( sw1, sw2 );
    bool turn_on;
    for( ; ; ) {
        turn_on = gate.get();
        if( turn_on ) {
            led.set( 1 );
        } else {
            led.set( 0 );
        }
        hwlib::wait_ms( 50 );
    }
}