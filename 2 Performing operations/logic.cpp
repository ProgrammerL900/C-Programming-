/**
 * @file logic.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Assessing logic pg 32
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std; 

//Main function

int main() {
    //Program goes here 

    /**
     * @brief declare and initialize two int
     * varaibles. With values that represent 
     * Boolean values.
     * 
     */

    int a = 1, b = 0;

    //statements to out result of AND

    cout << "AND logic: " << endl;
    cout << "(a && a) " << (a && a) << "(true) ";
    cout << "(a && b) " << (a && b) << "(false) ";
    cout << "(b && b) " << (b && b) << "(false) " << endl;

    //OR evalations 

    cout << endl << "OR logic: " << endl;
    cout << "(a || a) " << (a || a) << "(true) ";
    cout << "(a || b) " << (a || b) << "(true) ";
    cout << "(b || b) " << (b || b) << "(false) " << endl;

    //NOT evaluation 

    cout << endl << "NOT logic: " << endl;
    cout << "a = " << a << " !a = " << !a << " ";
    cout << "b = " << b << " !b = " << !b << endl;
    



    return 0;
}