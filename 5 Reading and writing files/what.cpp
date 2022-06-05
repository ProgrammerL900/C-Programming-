/**
 * @file what.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Recognizing exception pg 92
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string> 
#include <iostream>
using namespace std; 

//main function 

int main() {
    /** declaring an initialized string variable */

    string lang = "C++";

    /** try bloack containing a statement 
     * attempting to erase part of the string variable */

    try { lang.erase(4, 6) ; }

    /** catch block to send a decription 
     * to standard error output by the cerr functions */

    catch (exception &error)
    { cerr << "Exception: " << error.what() << endl; }



    return 0; 
}