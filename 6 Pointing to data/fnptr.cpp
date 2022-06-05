/**
 * @file fnptr.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Passing pointers to functions pg 104
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

/** two function prototype to each 
 * accept a signle pointer argument  
 */

void writeOutput(int*);
void computeTriple(int*);


//main function

int main() {
 /** initialized regular integer variable*/

 int num = 5;
 //Add more statement here

 /** second variable declaration
  * that initializes a pointer with address
  * of the regular integer value */

 int* ptr = &num;

 /** Pass a pointer arg to a function
  * to output the variable value to which it points*/
 
 writeOutput(ptr);

 /** Use the pointer to increase the 
  * variable value then display its value */

 *ptr += 15;    //Add and assign a dereferenced value
 writeOutput(ptr);

 /** pass a pointer arg to a function 
  * to multiply the variable to which it 
  * points then display its new value */

 computeTriple(ptr);
 writeOutput(ptr);


 return 0;
}

/** define a function to output
 * the current value of a variable to which a 
 * pointer points */

void writeOutput(int* value) {
    cout << "Current value: " << *value << endl;
}

/** another function to multiply the 
 * current value of a variable to which a pointer points */

void computeTriple(int* value) {
    *value *= 3;    //Multiply and assign dereferenced value
}











