/**
 * @file input.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Getting string input pg 64
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
    string name;
    //Add more statements here.
    
    //asking for user's input and outputting value
    
    cout << "Please enter your full name: ";
    cin >> name;
    cout << "Welcome " << name << endl;

    //requesting user name but with getline function

    cout << "Please re-enter your full name: ";

    //resolves problem 
    // name should be whole 
    
    cin.ignore(256, '\n'); 
    getline(cin, name);
    cout << "Thanks, " << name << endl;
    
    return 0;
}