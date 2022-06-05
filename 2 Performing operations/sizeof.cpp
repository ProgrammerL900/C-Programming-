/**
 * @file sizeof.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Establishing size pg 36
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

    //variables of various data types

    int num;        int nums[50];       float decimal;
    bool isTrue;    unsigned int max;   char letter;
    double pi;      short int number;   char letters[50];

    //output the byte size of variables

    cout << "int size: " << sizeof(num) << endl;
    cout << "50 int size: " << sizeof(nums) << endl;
    cout << "short int sie: " << sizeof(number) << endl;
    cout << "unsigned int size: " << sizeof(max) << endl;

    //out the size of other variables
    
    cout << "double size: " << sizeof(pi) << endl;
    cout << "float size: " << sizeof(decimal) << endl;
    cout << "char size: " << sizeof(letter) << endl;
    cout << "50 char size: " << sizeof(letters) << endl;
    cout << "bool size: " << sizeof(isTrue) << endl;

    return 0;
}