/**
 * @file arrptr.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Making arryas of pointers pg 106
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
    /** declare two initialized variables --
     * regular character arry and character pointer 
     * with identical string values */

    char letters[8] = {'C', '+', '+', ' ', 'F', 'u', 'n', '\0'};
    const char* text = "C++ Fun";
    //Add more statement here 

    /** statements to declare and initialize
     * two further character pointer variables 
     * with unique string variable */

    const char* term = "Element:";
    const char* lang = "C++";

    /** statement to declare a character pointer
     * array, initialized with three string variables */
    const char* ap1[3] = {"Great ", "Program", "Code    "};

    /** statement to declare a second character pointer 
     * array, initialized with three string values --
     * making one of the pointer variables its first element value */

    const char* ap2[3] = {lang, "is ", "Fun"};

    /** decalre two "master" character pointer arrays.
     * each initialized with three elemtn of char pointer arrays */

    const char* ap3[3] = {ap2[0], ap2[1], ap1[0]};
    const char* ap4[3] = {ap1[2], ap2[1], ap2[2]};

    /** statements to output the identical
     * string values of the first two variables */

    cout << letters << endl;
    cout << text << endl;

    /** loop to output the values within
     * a character pointer*/

    for (int i =0; i < 3; i++) {
        cout << term << i << "  ";

        //statements to output each element value

        cout << ap1[i] << "  ";
        cout << ap2[i] << "  ";
        cout << ap3[i] << "  ";
        cout << ap4[i] << endl;
    }







    return 0;
}