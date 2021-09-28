// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program tells a user if their chosen year is/was a leap year

#include <iostream>

int main() {
    // This function determines if the user's year is a leap year

    int year_a_i;
    std::string year_a_s;

    // Input
    std::cout << "Enter a year(AD): ";
    std::cin >> year_a_s;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        year_a_i = std::stoi(year_a_s);

        if (year_a_i % 4 == 0) {
            if (year_a_i % 100 == 0) {
                if (year_a_i % 400 == 0) {
                    std::cout << year_a_s << " is a leap year" << std::endl; }
                std::cout << year_a_s << " is a common year" << std::endl; }
            std::cout << year_a_s << " is a leap year" << std::endl;
            } else {
        std::cout << year_a_s << " is a common year" << std::endl; }
    }   catch (std::invalid_argument) {
            std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
