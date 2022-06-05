/**
 * @file point.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Doing pointer arithmetic pg 102
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std; 

//main function 

int main() {
    //initialized integer array of 10 elements 

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Add more statements 

    /**
     * statment to declare pointer, initialized
     * with mem address of first element
     * 
     */

    int* ptr = num;

    /* statement to output mem address of first
    * element of the integer arry and its value */

   cout << endl << "ptr at: " << ptr << "gets: " << *ptr;

   /** incremet the pointer and output its
    * new memory address */

   ptr++;
   cout << endl << "ptr at: " << ptr << "gets: " << *ptr;

   /** increment again and output mem */

    ptr++;
   cout << endl << "ptr at: " << ptr << "gets: " << *ptr;

    /** decrement the pointer and output its mem address */

    ptr -= 2;
   cout << endl << "ptr at: " << ptr << "gets: " << *ptr;
   cout << endl;

   /** loop to output the vale stored in each element 
    * of the array */

   for (int i =0; i < 10; i++) {
       cout << endl << "Element: " << i;
       cout << "    Value: " << *ptr;
       ptr++;
   }
   cout << endl;



    return 0;
}