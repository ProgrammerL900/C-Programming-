/**
 * @file precedence.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Setting precedence pg 38
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

    //integer variables using default precedence
    
    int num = 1 + 4 * 3;
    cout << endl << "Default order: " << num << endl;

    /**
     * @brief assign the result of this expression 
     * to the variable using explicit precedence 
     * then outut result
     * 
     */

    num = (1 + 4) * 3;
    cout << "Forced order: " << num << endl << endl;

    /**
     * @brief Assign the result of a different expression to the variable
     * using direction precedence, out result
     * 
     */

    num = 7 - 4 + 2;
    cout << "Default direction: " << num << endl;

    /** 
     * assign the result of this expression to the variable
     * using explicit precedence, then output result
     */

    num = 7 - (4 + 2);
    cout << "Forced direction: " << num << endl;
    

    return 0; 
}