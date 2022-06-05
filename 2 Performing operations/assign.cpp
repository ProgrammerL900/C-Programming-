/**
 * @file assign.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Assigning Values pg 28
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
     * @brief statment declaring two    
     * integer variables
     * 
     */

    int a, b;

    /**
     * @brief statements to output
     * simple assigned values
     */

    cout << "Assign values: ";
    cout << "a = " << (a = 8) << " ";
    cout << "b = " << (b = 4) << " ";

    /**
     * @brief statments to output
     * combined assigned values
     * 
     */

    cout << endl << "Add & assig: ";
    cout << "a += b (8 += 4) a = " << (a += b);

    cout << endl << "Subtract & assign: ";
    cout << "a -= b (12 -= 4) a = " << (a -= b);

    cout << endl << "Multiply & assign: ";
    cout << "a *= b (8 *= 4) a = " << (a *= b);

    cout << endl << "Divide & assign: ";
    cout << "a /= b (32 /= 4) a = " << (a /= b);
    
    cout << endl << "Modulus & assign: "; 
    cout << "a %= b (8 %= 4) a = " << (a %= b);



    return 0;
}