/**
 * @file cast.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Casting data type pg 40
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std; 

//main function 

int main() {
    //Program goes here 

    //variables 
    int num = 7, factor = 2;
    char letter = 'A';
    float result = 0.0;

    //out of plain interger division 

    cout << "Integer division: " << (num / factor ) << endl;

    //casting into floating-point variable

    result = (float)(num) / factor;
    cout << "Cast division float: " << result << endl;

    //cast a character variable into integer variable 

    num = static_cast <int> (letter);
    cout << "Cast character int: " << num << endl;

    //Cast integer into character variable

    letter = static_cast <char> (70);
    cout << "Cast integer char: " << letter << endl;

    return 0;
}
