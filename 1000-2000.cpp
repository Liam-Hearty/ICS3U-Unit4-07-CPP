// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a loop inside another loop.


#include <iostream>


int main() {
    // This program outputs all integers from 1000 to 2000

    // variables
    int counter;

    // process
    for (counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";
        if (counter % 5 == 4) {
            std::cout << " " << std::endl;
        }
    }
}
