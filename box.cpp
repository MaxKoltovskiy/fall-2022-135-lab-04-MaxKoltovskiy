/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4A

Creates a box of asterisks given a specific width and height
*/
#include "functions.h"

std::string box(int width, int height) {

    std::string result; 
    for(int i=0; i<height; i++) {
        result += "\n";
        for(int j=0; j<width; j++) {
            result += " *";
        }
        
    }
    return result;
}