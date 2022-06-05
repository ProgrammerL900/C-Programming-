/**
 * @file arithmetic.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Doing arithmetic pg 26
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

/**
 * @brief main function
 *  
 */

int main() {
    //Program goes here

    /**
     * @brief statement to declare and
     *  initialize two integer varaibles
     * 
     */
    int a = 8, b = 4;

    /**
     * @brief outputs that use arithmetic operations
     * 
     */

    cout << "Addition result: " << (a + b) << endl;
    cout << "Subtraction result: " << (a - b) << endl;
    cout << "Multiplication result: " << (a * b) << endl;
    cout << "Division result: " << (a / b) << endl;
    cout << "Modulus result: " << (a % b) << endl;

    /**
     * @brief statements to output result
     * of both postfix and prefix increment operations
     * 
     */

    cout << "Postfix increment: " << a++ << endl;
    cout << "Post fix result: " << a << endl;
    cout << "Prefix increment: " << ++b << endl;
    cout << "Prefix result: " << b << endl;

    return 0;
}