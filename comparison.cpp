/**
 * @file comparison.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Comparing values pg 30
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
     * @brief statements to declare
     * and initialize variables 
     * that can convert to Booleans
     */

    int nil = 0, num = 0, max = 1; 
    char cap = 'A', low = 'a';

    //output equality comparisons

    cout << "Equality comparisons: ";
    cout << "(0 == 0) " << (nil == num) << "(true)";
    cout << "(A == a) " << (cap == low) << "(false)";

    //Output other comparisons
    cout << endl << "Inequality comparison: ";
    cout << "(0 != 1) " << (nil != max) << "(true)";
    
    cout << endl << "Greater comparison: ";
    cout << "(0 > 1) " << (nil > max) << "(false)";

    cout << endl << "Lesser comparison: ";
    cout << "(0 < 1) " << (nil < max) << "(true)";

    cout << endl << "Greater or equal comparison: ";
    cout << "(0 >= 0) " << (nil >= num) << "(true)";

    cout << endl << "Lesser or equal comparison: ";
    cout << "(1 <= 0) " << (max <= num) << "(false)";


    return 0;
    
}
