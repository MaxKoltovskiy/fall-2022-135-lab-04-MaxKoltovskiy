/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment Lab 4E

Returns the upper right half of a square with a given height
*/
#include "functions.h"

std::string upper(int height) {
    std::string result;
    for(int i = height; i>= 1; i--) {
        result += "\n";
        result += set_spaces(height - i);
        // adds spaces so the asterisks are oriented right
        for(int a = i; a> 0; a--) {
            result += "*";

        }
    }

    return result;
}