/**
 * @file swap.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Copying & swapping strings pg 72
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>
#include <iostream>
using namespace std;

//main function

int main() {
    //three string variables 
    
    string front;
    string back;
    string text = "Always laugh when you can. It\'s cheap medicine.";
    //Add more statements here

    /** statement to assign the entire value of the initialized string 
    * variable to the first uninitialized string variable
    */ 

    front.assign(text);

    //output newly assigned string value 
    
    cout << endl << "Front: "  << front << endl;

    //assign first 27 characters of initialized variable to first variable

    front.assign(text, 0, 27);

    //output new assigned string value

    cout << endl << "Front: " << front << endl;

    /**assign last part of initialized string variable to
    * second unitialized variable
    */

    back.assign(text, 27, text.size());

    /** Exchange the assigned string value 
     * in the first and secong string variables 
     * then output 
     */

    back.swap(front);
    cout << endl << "Front: " << front << endl;
    cout << "Back: " << back << endl; 

    return 0;
}