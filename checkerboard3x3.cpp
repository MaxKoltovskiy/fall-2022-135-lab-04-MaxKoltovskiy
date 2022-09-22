/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4G

Creates a checkerboard pattern of 3x3 squares with inputted dimensions
*/
#include "functions.h"

std::string checkerboard3x3(int width, int height) {

    std::string result; 
    std::string row;
    std::string insert;
    bool space_start;
        for(int col=0; col<height; col++) {
            row = "";
            result += "\n";
            
            if(col%6 == 0) {
                space_start = false;
            }
            else if(col%3 == 0) {
                space_start = true;
            }
            
            while(row.length() < width) {
                if(row.length()%6 == 0) {

                    if(space_start) {
                        insert = " ";
                    } else {
                        insert = "*";
                    }
                }
                else if(row.length()%3 == 0) {

                    if(space_start) {
                        insert = "*";
                    } else {
                        insert = " ";
                    }
                }

                row += insert;
            }
           
            result += row;
        }
        return result;

}
