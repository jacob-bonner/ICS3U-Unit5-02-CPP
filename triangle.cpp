// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program calculates the area of a triangle

#include <stdlib.h>
#include <iostream>

void Calculate(float base, float height) {
    // This function calculates the area of a triangle

    // Variables
    float area;

    // Process
    area = (base*height)/2;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The area of the triangle is " << area << "cm^2" << std::endl;
}

int main() {
    // This function takes two inputs then calls the calculate function

    // Variables
    int baseFromUser;
    int heightFromUser;
    std::string baseAsString;
    std::string heightAsString;

    // Process
    while (true) {
        // Input
        std::cout << "Enter the base in cm here (integer):" << std::endl;
        std::cin >> baseAsString;
        std::cout << "Enter the height in cm here (integer):" << std::endl;
        std::cin >> heightAsString;

        try {
            baseFromUser = std::stoi(baseAsString);
            heightFromUser = std::stoi(heightAsString);
            Calculate(baseFromUser, heightFromUser);
            if (baseFromUser == std::stoi(baseAsString) && \
                heightFromUser == std::stoi(heightAsString)) {
                break;
            } else {
                std::cout << "Error, unable to process inputs" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Error, one or both inputs not integers" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
