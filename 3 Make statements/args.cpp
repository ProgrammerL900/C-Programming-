/**
 * @file args.cpp
 * @author Laura Wilson  (you@domain.com)
 * @brief Passing arguments pg 54
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

//function prototype
//returns float value and float argument 
float fToC(float degreesF = 32.0);

//main function 

int main() {
    //Program goes here 

    /*statment to decalre two float variables
    * to store an input Fahrenheit temp value 
    * and its Centrigrade equivalent.
    */

   float fahrenheit, centrigrade;

   //user's input
   
   cout << "Enter a Fahrenheit temperature:\t";
   cin >> fahrenheit;

   

   /* call fToC to convert the input value 
   * and assign the conversion to second variable.
   */

  centrigrade = fToC(fahrenheit);

  //output message
  cout << fahrenheit << "F is " << centrigrade << "C";

  cout << endl << "Freezing point: " << fToC() << "C";

    return 0;
}

//define fToC
    float fToC(float degreesF) {
        float degreesC = ((5.0/9.0) * (degreesF - 32.0));
        return degreesC;
    }