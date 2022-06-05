/**
 * @file optimize.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Optimizing functions pg 58
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

//two function prototypes 
//recurive functions 

int computeFactorials(int, int);
int factorial(int);

//main function 
int main() {
    //Program goes here

    //Call to recursive function

    computeFactorials(1, 8);

    return 0;
}

//first function prototype definition

int computeFactorials(int num, int max) {
    cout << "Factorial of " << num << " : ";
    cout << factorial(num) << endl;     //Statements
    num++;      //Incrementer
    if (num > max) return 0;    //Exit...
    else computeFactorials(num, max);   //or call again.
    
}

//recursive function for second prototype 

/**
int factorial(int n) {
    int result;     
    if (n ==1) result = 1;   //Exit or...
    else result = (factorial(n-1) * n);   //Decrement
    return result;      //and call again.
}
*/

//Improves effciency with ternary operator

inline int factorial(int n) {
    return (n == 1) ? 1 : (factorial(n-1) * n);
}