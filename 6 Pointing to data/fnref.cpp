/**
 * @file fnref.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Passing references to functions pg 110
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std; 

/** two function prototypes
 * to accept a single ref arg */

void writeOutput(int&);
void computeTriple(int&);

//main function 

int main() {
    /**declaring initialized regular integer value */

    int num = 5;
    //Add more statements here

    /** second variable declaration insitilizing 
     * a ref as an alias of the integer variable */

    int& ref = num;

    /** pass a ref arg to a function to output */
    writeOutput(ref);

    /** use the ref to increase the variable value
     * then display value */

    ref += 15;  //Add and assign a ref value
    writeOutput(ref);

    /** pass a ref arg to a function to multiplu the variable */

    computeTriple(ref);
    writeOutput(ref);
    



    return 0;
}

/** defind a function to output
 * the current value of a variable to which a reference
 * refers */
void writeOutput(int& value) {
    cout << "Current value: " << value << endl;


}

/** function to muliply the current value 
 * of a variable towhich a reference refers */

void computeTriple(int& value) {
    value *= 3;     //Multiply and assign a referenced value
}