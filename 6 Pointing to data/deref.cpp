/**
 * @file deref.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Getting values with pointers pg 100
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
    /* declaring two regular 
    * initialized integer variables */

   int a = 8, b = 16;
   //Add more statements 

    /* statement to decalre and intialize a pointer
    * with mem address of first variable */

   int* aPtr = &a;      //aPtr assigned address of a

   /* statement to declare second pointer 
   * then initialzed it with address */

  int* bPtr;        //bPtr declared
  bPtr = &b;       //bPtr assigned to address of b

  /* output the actual mem address of pointer */

  cout << "Addresses of pointers..." << endl;
  cout << "aPtr: " << &aPtr << endl;
  cout << "bPtr: " << &bPtr << endl << endl;

  /* output mem address stored inside pointers */

  cout << "Values in pointers..." << endl;
  cout << "aPtr: " << aPtr << endl;
  cout << "bPtr: " << bPtr << endl << endl;

  /**
   * @brief statements to output the values stored
   * at the memory address stored in each pointer 
   * -- the value of the variables to which the pointers point to
   */

  cout << "Values in addressess pointed to..." << endl;
  cout << "a: " << *aPtr << endl;
  cout << "b: " << *bPtr << endl;

  





   return 0;
}