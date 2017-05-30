// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

class rectangle : public drawable {
private:
    line left;
    line right;
    line top;
    line bottom;
protected:
    vector top_left; 
    vector bot_right;
    bool filled;
public:
    bool hit = false;
    rectangle( window & w, const vector & top_left, const vector & bot_right, const bool & filled = false, const vector & bounce = vector( 1, 1 ) );
    void draw() override;
};


#endif // RECTANGLE_HPP
