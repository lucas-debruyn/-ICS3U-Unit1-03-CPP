// Copyright (c) 2022 Lucas DeBruyn All rights reserved
//
// Created by: Lucas DeBruyn
// Created on: Sep 2022
// This program calculates the area and perimeter of a circle
//    with radius 15mm

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the area and perimeter

    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
