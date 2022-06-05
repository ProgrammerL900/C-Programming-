/**
 * @file ref.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Referencing data pg 108
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
    /** declaring two variables
     * regular integer variable and reference 
     * to that variable */

    int num;
    int& rNum = num;
    //Add more statements here 

    /** statement assigning an intial value
     * to the integer value */
    rNum = 400;

    /** statements to output the stored value
     * both directly and reference */

    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;

    /** statements to output the memory address
     * both directly and ref */

    cout << "Address direct: " << &num << endl;
    cout << "Address via reference: " << &rNum << endl;

    /** statement to manipulate the value stored
     * in the variable via ref */

    rNum *= 2;

    /** outout the stored value 
     * directly and ref */

    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;




    return 0;

}