/**
 * @file address.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Understanding data storage pg 98
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string> 
#include <iostream> 
using namespace std;

//main function 

int main() {
    //three variables initialized

    int num = 100; 
    double sum = 0.0123456789;
    string text = "C++ Fun";
    //Add more statments here 

    /* statements to output mem address */

    cout << "Integer variable starts at: " << &num << endl;
    cout << "Double varaible starts at: " << &sum << endl;
    cout << "String variable starts at: " << &text << endl;

    /* statements placing R-values incorrectly */

    200 = num;
    5.5 = sum;
    "Bad assignments" = text;



    return 0;
}