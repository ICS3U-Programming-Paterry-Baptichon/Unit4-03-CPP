// Copyright (c) 2022 Paterry Baptichon HJ All rights reserved
//
// Created by Paterry Baptichon J
// Created on 2022-04-27
// this program calculates the square of each integer from 0 to the
// number entered

#include <iostream>
#include <string>
#include <cmath>

int main() {
// this program calculates the square of each integer from 0 to the
// number entered
    int positive_number;
    int counter;
    int integer_squared;
    std::string positive_number_string;


    // input of the user including switching string to integer
    std::cout << "Enter any positive integer please: ";
    std::cin >> positive_number_string;
    std::cout << "" << std::endl;
    integer_squared = 0;
    counter = 0;


    // processing the square of each number
    try {
        positive_number = std::stoi(positive_number_string);

        if (positive_number > 0) {
            std::cout << "The square of each number from 0 to "
                      << positive_number << " is:";
                      std::cout << "" << std::endl;
            for (counter = 0; counter < positive_number + 1; counter++) {
                integer_squared = pow(counter, 2);
                std::cout << counter << "² = " << integer_squared << std::endl;
}       // if number is not positive ask user to enter one
    }   else {
            std::cout << positive_number << " was not a positive integer."
                    " Enter an integer above 0.";
            std::cout << "" << std::endl;
    }       // display invalid input if user's input is not an enteger
    }catch (std::invalid_argument) {
        std::cout << positive_number_string << " is not an integer."
                    "Please enter an integer.";
    }
}
