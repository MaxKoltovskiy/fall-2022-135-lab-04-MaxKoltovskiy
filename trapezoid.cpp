/* 
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4F

Returns an upside down trapezoid with given starting width and given height
*/

#include "functions.h"

std::string trapezoid(int width, int height) {
    if(width-(2*height) < 0) {
        // makes sure that for each change in height, the number of stars will always be more than 0
        //since each iteration will remove 2 stars
        return "\nImpossible shape!";
    }
    //else { return "\nPossible size.";}

    std::string result;
    int spaces = 0;
    int stars = width;

    for(int h = height; h>0; h--) {
        
        result += "\n";
        result += set_spaces(spaces);
        for(int w = stars; w > 0; w--) {
            result += "*";
        }
        spaces++;
        stars -= 2;

    }

    return result;
}