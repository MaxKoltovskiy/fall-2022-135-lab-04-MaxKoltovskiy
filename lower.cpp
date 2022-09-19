/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment Lab 4D

Returns the lower left half of a square with a given height
*/
#include "functions.h"

std::string lower(int height) {
    std::string result;
    for(int i = 1; i<= height; i++) {
        result += "\n";
        for(int a = i; a> 0; a--) {
            result += "*";

        }
    }

    return result;
}