/**
 * @file pref.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Comparing pointer & references pg 112
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std; 

/** define an inline function 
 * to output the total of two passed arg */

inline void add(int& a, int* b) {
    cout << "Total: " << (a + *b) << endl;
}

//main function 

int main() {
    /** two regular integer values, one ref 
     * and two pointers */

    int num = 100, sum = 500;
    int& rNum = num;
    int* ptr = &num;
    void(*fn) (int& a, int* b) = add;
    //Add more statements here 

    /** statements to output the first integer variable
     * value via ref and pointer */

    cout << "Reference: " << rNum << endl;
    cout << "Pointer: " << *ptr << endl;

    /** assign second integer to the pointer 
     * and output its value via pointer. Then call the 
     * function pointer to output sum of varaiable value */

    ptr = &sum;
    cout << "Pointer now: " << *ptr << endl;
    fn(rNum, ptr);




    return 0;
}