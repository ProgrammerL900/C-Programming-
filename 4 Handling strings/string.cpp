/**
 * @file string.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Creating string variables pg 62
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>   //Include string support
#include <iostream> 
using namespace std;


//main function 

int main() {
    //four string variables

    string text = "9";
    string term("9 ");
    string info = "Toys";
    string color;
    //Add more statments here

    /**
     * @brief declare and initialize a character array
     * assign its value to uninitialized string variable
     * 
     */

    char hue[4] = {'R', 'e', 'd', '\0' };
    color = hue;

    //longer text string to one string variables

    info = "Balloons";

    //combine all string variables

    text += (term + color + info);
    cout << endl << text << endl;

    return 0;
}

