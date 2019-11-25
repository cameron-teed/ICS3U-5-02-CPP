// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Cameron Teed
// Created on: Nov 2019
// This programe calculates the area of a triangle

#include <iostream>
#include <string>

void Area(float base, float height) {
    // This'll calcilate the area of a triangle

    // declaring area
    // process
    float area = (base * height) / 2;

    // output
    std::cout << "\nThe area is " << area << std::endl;
}

main() {
    // This is asks for the base and hieght, then it  runs area()

    // variables
    std::string stringBase;
    std::string stringHeight;
    float base = 0;
    float height = 0;

    while (true) {
        try {
            // input
            std::cout << "What is the base: " << std::endl;
            std::cin >> stringBase;
            std::cout << "What is the height: " << std::endl;
            std::cin >> stringHeight;
            // turns variables into float
            base = std::stof(stringBase);
            height = std::stof(stringHeight);

            // runs Area()
            Area(base, height);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Please put in a integer.\n" << std::endl;
            continue;
        }
    }
}
