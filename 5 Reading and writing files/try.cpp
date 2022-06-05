/**
 * @file try.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Predicting problem pg 90
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std; 

//main function 

int main() {
    /** declaring an integer variable
     * for increment by a loop */
    int number;

    /** try and catch blocks to handle a "bad number exception" */

    try 
    { 
        /** loop to increment the variable */
                 
        for(number = 1; number < 21; number++) {
        if (number > 4) throw (number);
        else 
        cout << "Number: " << number << endl;
        }   
    }
    catch (int num)
    { 
        /** exception handler statment */
        
        cout << "Exception at: " << num << endl;
      }






    return 0;
}