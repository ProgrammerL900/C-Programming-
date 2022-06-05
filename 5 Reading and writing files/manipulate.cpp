/**
 * @file manipulate.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Manipulating input & output pg 88 
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std; 

//main function 

int main() {
    /** declaring two initalized variable */

    bool isTrue = 1;
    int num = 255;

    /** statements to set the width
     * and fill of an output stream 
     * then output a text string on it */

    cout.width(40);
    cout.fill('.');
    cout << "Output" << endl;

    /** set the precision of an output stream 
     * to stop truncation of decimal places. 
     * Then output a floating point number */

    cout.precision(11);
    cout << "Pi: " << 3.1415926536 << endl;

    /** statements to manipulate the output */

    cout << isTrue << ": " << boolalpha << isTrue << endl;
    cout << num << ": " << hex << showbase << uppercase << num << endl;


    return 0;
}