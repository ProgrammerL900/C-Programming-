/**
 * @file convert.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Solving the string problem pg 66
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>
#include <sstream>      //Include stringstream support
#include <iostream>
using namespace std;

//main function

int main() {
    //two initialized variables

    string term = "100";
    int number = 100;
    //Add more statements here.
    
    //declare a interger variable, string variable and stringstream object
    
    int num;    //To store a converted string
    string text;    //To store a converted integer
    stringstream stream;    //To perform conversions
    
    stream << term;     //Load the string
    stream >> num;      //Extract the integer

    //Arithmetic 

    num /= 4;
    cout << "Integer value: " << num << endl;

    //reset stringstream
    
    stream.str("");     //Empty the contents
    stream.clear();     //Empty the bit flags

    stream << number;   //Load the integer
    stream >> text;     //Extract sring

    text += " Per Cent";
    cout << "String value: " << text << endl;

    
    
    
    return 0;
}