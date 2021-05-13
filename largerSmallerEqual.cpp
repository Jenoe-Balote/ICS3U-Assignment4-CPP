// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines which of two numbers are
//      larger, smaller or equal to each other.

#include <iostream>
#include <string>

main() {
    // this function runs the "Larger, Smaller, or Equal?" program
    std::string stringOne;
    std::string stringTwo;
    int numberOne;
    int numberTwo;

    // input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter your first number: ";
    std::cin >> stringOne;
    std::cout << "Enter your second number: ";
    std::cin >> stringTwo;
    std::cout << "" << std::endl;

    // process
    try {
        numberOne = std::stoi(stringOne);
        numberTwo = std::stoi(stringTwo);
        if (numberOne > numberTwo) {
        // output
            std::cout << stringOne << " is larger" << std::endl;
            std::cout << stringTwo << " is smaller" << std::endl;
        } else if (numberOne < numberTwo) {
        // output
            std::cout << stringTwo << " is larger" << std::endl;
            std::cout << stringOne << " is smaller" << std::endl;
        } else if (numberOne == numberTwo) {
        // output
            std::cout << "The two numbers are equal!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout<< stringOne << " is invalid data." << std::endl;
    }
    std::cout << ""<< std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
