/**
 * @file switch.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Switching branches pg 46
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
    
   /**
    * @brief Original input from book
    * 
    */

   // int num = 6; //Was 3 

   /**
    * @brief Added User input
    * so you could could a number and 
    * get an answer with the switch statement
    * 
    */
   
   int num;


   cout << "Pick a number 1 - 7" << endl;
   cin >> num;

    //switch statment 

   switch (num) {
      case 1: cout << num << " : Monday"; 
         break;
   
      case 2: cout << num << " : Tuesday";
         break;
        
      case 3: cout << num << " : Wednesday";
         break;
        
      case 4: cout << num << " : Thursday";
         break;
        
      case 5: cout << num << " : Friday";
         break;

        //default case 
      default: cout << num << " : Weekend day";
   }



   return 0; 

}