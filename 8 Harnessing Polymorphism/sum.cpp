/**
 * @file sum.cpp
 * @author your name (you@domain.com)
 * @brief Employing isolated classes pg 149
 * @version 0.1
 * @date 2024-05-05
 * to complie in VSCode: c++ ops.cpp sum.cpp -o sum.exe
 * to execute in VSCode.\sum
 * 
 * @copyright Copyright (c) 2024
 * 
 */

//Client file
#include "ops.h"

/*main method*/
int main()
{
    Calculator* pCalc = new Calculator;
    pCalc -> launch();
    //Add more statements here.

    //loop to read expressions and write results
    while(pCalc -> run())
    {
        pCalc -> readInput();
        pCalc ->writeOutput();
    }
    return 0;
}