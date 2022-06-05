/**
 * @file while.cpp
 * @author Laura Wilson  (you@domain.com)
 * @brief Looping while pg 50
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <vector>       //Include vector support
#include <iostream>
using namespace std;

//main function 

int main() {
    //Program goes here

    //declare integer vector and variable loop counter

    vector <int> vec(10);   //vector
    int i = 0;  //Counter

    //While loop

    while (i < vec.size()) {
        i++;        //Increment the counter
        
        /**
         * @brief To make the loop skip its third iteration
         * 
         */
        
        if (i == 3) {
            cout << " | Skipped"; 
            continue;
        }

            /**
             * @brief After the continute 
             * make break statment quit on eighth iteration
             * 
             */

            if (i == 8) {
                cout << endl << "Done";
                break;
            }
        

        vec[i-1] = i;   //Assign count to element
        cout << " | " << vec.at(i-1);
    }


    return 0;
}