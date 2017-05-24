#include "FilledRectangle.hpp"

void FilledRectangle::print() {
    for(int xCounter = top_left_x; xCounter < bot_right_x; xCounter++) {
        for(int yCounter = top_left_y; yCounter < bot_right_y; yCounter++) {
            w.draw(xCounter, yCounter);
        }
    }
}