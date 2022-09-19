/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4B

Creates of checkerboard pattern with inputted dimensions
*/
#include "functions.h"

std::string checkerboard(int width, int height) {

    std::string result; 
    std::string row;
        for(int i=0; i<height; i++) {
            row = "";
            result += "\n";
            
            if(i%2 != 0) {
                row += " ";
            }
            
            while(row.length() < width) {
                row += "* ";
            }
            
            result += row;
        }
        return result;

}
