// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program print all numbers from 1000-2000

#include <iostream>


int main() {
    // this function is a loop
    int loop_counter = 1000;
    int end_number = 2000;

    // process & output
    for (loop_counter = 1000; end_number + 1 > loop_counter; loop_counter++) {
        if (loop_counter % 5 != 4) {
            std::cout << loop_counter << " ";
        } else {
            std::cout << loop_counter << std::endl;
        }
    }
    std::cout << "\n\nDone." << std::endl;
}
