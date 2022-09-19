/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4

Drives the program
*/
#include "functions.h"

int main()
{
    std::cout<< "box(3,5):\n";
    std::cout<< box(3,5);
    std::cout<< "\n------------------\n";

    std::cout<< "checkerboard(11,6):\n";
    std::cout<< checkerboard(11,6);
    std::cout<< "\n------------------\n";

    std::cout<< "cross(8):\n";
    std::cout<< cross(8);
    std::cout<< "\n------------------\n";

    std::cout<< "lower(6):\n";
    std::cout<< lower(6);
    std::cout<< "\n------------------\n";

    std::cout<< "upper(5):\n";
    std::cout<< upper(5);
    std::cout<< "\n------------------\n";
}