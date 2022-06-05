/**
 * @file compare.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Joining comparing strings pg 70
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string> 
#include <iostream>
using namespace std;

//main function 

int main() {
    //three initialized string variables

    string lang = "C++ ";
    string term = "Programming";
    string text = "C++ Programming";
    //Add more statments here

    //output two string values with + concentenate operator
    //(unchanged) value of first variable

    cout << "Concatenated: " << ( lang + term ) << endl;
    cout << "Original: " << lang << endl;

    //Output two string values 
    //combined with append() function and (changed) value of first variable
    
    cout << "Appended: " << lang.append(term) << endl;
    cout << "Orignial: " << lang << endl << endl;

    //Compare two string values with ==

    cout << "Differ: " << (lang == term) << endl;
    cout << "Match: " << (lang == text) << endl << endl;

    //use compare() with three string variables

    cout << "Match: " << lang.compare(text) << endl;
    cout << "Differ: " << lang.compare(term) << endl;
    cout << "Lower ASCII: " << lang.compare("zzzzz") << endl;


    return 0;
}
