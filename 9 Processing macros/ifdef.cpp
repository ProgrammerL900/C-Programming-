/**
 * @file ifdef.cpp
 * @author your name (you@domain.com)
 * @brief Defining conditions pg 156
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*conditional test to insert directive
*when macro isn't found
*/
#ifndef BOOK
#define BOOK "C++ Programming in easy steps"
#endif

/*library classes */
#include <iostream>
using namespace std;

/*main function*/
int main() {
    //Program code goes here.
    /*conditional preprossor test*/
    #ifdef BOOK
     cout << BOOK;
    #endif

    /*another conditional preprocessor test to both define
    *new macro and insert output statements*/
   #ifndef AUTHOR
    #define AUTHOR "Mike McGrath"
    cout << " by " << AUTHOR << endl;
   #endif

   /*conditional test to undefine a macro*/
   #ifdef BOOK
    #undef BOOK
   #endif

    /*conditional test to redeind a macro*/
    #ifndef BOOK
     #define BOOK "Linus in easy steps"
     cout << BOOK " by " << AUTHOR << endl;
    #endif    

    return 0;
}