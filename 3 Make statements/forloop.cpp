/**
 * @file forloop.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Looping for pg 48
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

//main function 

int main() {
    //Program goes here

    //variable 
     
     int i, j;      //Integer variable j added.

     //For loop

     for (i = 1; i < 4; i++) {
         cout << "Loop iteration: " << i << endl;
         for (j = 1; j < 4; j++) {
             cout << "  Innter loop iteration: " << j << endl;
         }
     }

    return 0;
}