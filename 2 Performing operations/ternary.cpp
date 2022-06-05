/**
 * @file ternary.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Examining conditions
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include <iostream> 
using namespace std;



//main function 

int main() {
    //Program goes here 

    //variables
    int a, b, max;
    a = 1, b = 2;

    //output and partity of first examined variable
    
    /**
     * NOTE: LIKE ASKING A QUESTION
     * WHAT IS (...) ? IF IT'S TRUE ___ : 
     * IF IT'S FALSE : ___
     */

    cout << "Variable a value is: ";
    cout << ((a != 1) ? "not one, " : "one, " ); 
    cout << ((a % 2 != 0) ? "odd" : "even" );

    //output and parity of second examined variable
    cout << endl << "Variable b value is: ";
    cout << ((b != 1) ? "not one, " : "one, " );
    cout << ((b % 2 != 0) ? "odd" : "even" );

    /**
     * @brief statements to output the greater of the two 
     * stored variable values.
     * 
     */

    max = (a > b) ? a : b;
    cout << endl << "Greater value is: " << max << endl;

    return 0;
}