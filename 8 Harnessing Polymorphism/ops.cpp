/**
 * @file ops.cpp
 * @author your name (you@domain.com)
 * @brief Employing isolated classes pg 148
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ops.h"        //Reference header file
#include <iostream>
using namespace std;

/*defintiosn for each method 
in header file
*/
Calculator::Calculator()
{status = true;}    //Initialize status

void Calculator::launch()   //Display instructions
{
    cout << endl << "*** SUM CALCULATOR ***" << endl;
    cout << "Enter a number an operator, (+,-,*,/), and another number." 
    << endl << "Hit Return to calculate. Enter zero to exit." << endl;
}

void Calculator::readInput()        //Get expression.
{
    cout << "> "; cin >> num1;      //Get 1st number
    if(num1== 0) status = false;    //Exit if it's zero
    else {cin >> oper; cin >> num2;}
}

void Calculator::writeOutput()      //Display result
{
    if (status) switch(oper)        //If continuing
    {                               //Show result
        case '+': {cout << (num1 + num2) << endl; break;}
        case '-': {cout << (num1 - num2) << endl; break;}
        case '*': {cout << (num1 * num2) << endl; break;}
        case '/': if (num2 != 0)
                cout << (num1 / num2) << endl;
                else cout << "Cannot divide by zero" << endl;
    }
}

bool Calculator::run()  //Get the current status
{return status;}

