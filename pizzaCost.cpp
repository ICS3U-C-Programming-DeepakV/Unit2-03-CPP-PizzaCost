// Copyright (c) 2021 Ms Raffin All rights reserved.
//
// Created by: Ms Raffin
// Date: May 1, 2021
// This program shows the user the price of a pizza.

#include <iostream>
#include <iomanip>

int main() {
    // declare constants
    const float HST = .13;
    const float LABOURCOST = 2.00;
    const float RENTALCOST = 2.25;
    const float PIZZACOST = 1.5;
    const float INGREDCOST = 1.5;

    // declare variables
    float diameter;
    float subtotal;
    float tax;
    float total;

    std::cout << "Enter diameter of pizza" << "\n";
    std::cin >> diameter;

    // calculate the cost of the pizza
    subtotal = (INGREDCOST * diameter)
    + LABOURCOST
    + RENTALCOST
    + (PIZZACOST * diameter);

    tax = HST * subtotal;
    total = tax + subtotal;

    // This is the total of your pizza
    std::cout << "$" << std::fixed
    << std::setprecision(2)
    << std::setfill('0') << total << "\n";
}
