/**
 * @file scope.cpp
 * @author Laura Wilson  (you@domain.com)
 * @brief Declaring functions pg 52
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

//two simple function prototypes

float bodyTempC();
float bodyTempF();

//main function 
//contains calls to function 
//and return statment

int main() {
    cout << "Centrigrade: " << bodyTempC() << endl;
    cout << "Fahrenheit: " << bodyTempF() << endl;
    return 0;

}

//define both functions
/**
 * @brief to each return the value of a local "temp" variable
 * 
 */

float bodyTempC() {
    float temperature = 37.0;
    return temperature;
}

float bodyTempF() {
    float temperature = 98.6;
    return temperature;
}