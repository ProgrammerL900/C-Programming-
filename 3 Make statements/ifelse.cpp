/**
 * @file ifelse.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Branching with if pg 44
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

    int num = 3; //Was 8
    char letter = 'B'; //Was A

    //if-else statment 
    /**
     * @brief test the integer varaiable 
     * value and outputs response
     * 
     */

    if (num > 5)
     {
         cout << "Number exceeds five" << endl;
         
         if (letter == 'A') { 
            cout << "Letter is A" << endl;
        }

     }else {
        cout << "Number is five or less" << endl;
    }




    return 0;

}