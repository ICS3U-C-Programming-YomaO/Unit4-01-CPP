// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date: November, 2025
// This program shows the sum of numbers
#include <iostream>
#include <random>
#include <string>

int main() {
    // code assistance from Atri Sarker line 12 and 28
    size_t pos;
    // declare integer to hold random number

    // get the number from the user as a string
    std::string numberAsString;

    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;

    int numberAsInt;

    try {
        // convert the user's number to an int

        numberAsInt = std::stoi(numberAsString, &pos);

        if (numberAsString.length() != pos) {
            std::cout << "That is not a valid integer.";
        } else {
            int sum = 0;
            int counter = 0;

            // check if the number is positive

            // determine whether or the user can date the grandchild
            if (numberAsInt < 0) {
                std::cout << "Please enter a positive number " << std::endl;
            } else {
                while (counter <= numberAsInt) {
                    sum = sum + counter;
                    counter = counter + 1;
                }
                std::cout << sum << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout <<  "Please enter a positive number.\n";
    }
}
