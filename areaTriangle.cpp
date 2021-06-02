// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses user defined functions to calculate the area of a triangle

#include <iostream>

void CalculateArea(float baseFloat, float heightFloat) {
    // calculate area of a triangle
    float area;
    // process
    std::cout << "\n";
    area = baseFloat*heightFloat / 2;
    // output
    std::cout << "The area is " << area << "cm^2" << std::endl;
}


main() {
    // this function gets length and width
    float baseFloat;
    float heightFloat;
    std::string baseString;
    std::string heightString;

    // input
    std::cout << "Enter the base of a rectangle (cm): ";
    std::cin >> baseString;

    try {
        baseFloat = std::stof(baseString);
        if (baseFloat <= 0) {
            std::cout << baseFloat << " is not a positive number"<< std::endl;
        } else {
            std::cout << "Enter the width of a rectangle (cm): ";
            std::cin >> heightString;
            std::cout << std::endl;
            try {
                heightString = std::stof(heightString);
                if (heightFloat <= 0) {
                    std::cout << heightFloat << " is not a "
                                                "positive number"<< std::endl;
                } else {
                    // call functions
                    CalculateArea(baseFloat, heightFloat);
                }
            } catch (std::invalid_argument) {
                // The user did not enter an integer.
                std::cout << "\n";
                std::cout << "Please enter a valid number.\n";
            }
        }
        // make sure to catch errors such as anything but an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }
}
