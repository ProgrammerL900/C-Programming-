/**
 * @file overload.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Overloading functions pg 56
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;


//function prototype
//returns float value with one argument

float computeArea(float);

//Two overloaded function prototypes
//different arguments

float computeArea(float, float);
float computeArea(char, float, float);

//main function 

int main() {
    //Program goes here

    //two variables
    //one initilized with user input 

    float num, area;

    cout << "Enter dimension in feet: ";
    cin >> num;

    //call first function 

    area = computeArea(num);
    cout << "Circle: Area = " << area << " sq.ft." << endl;

    //call overloaded functions

    area = computeArea(num, num);
    cout << "Square: Area = " << area << " sq.ft." << endl;
    area = computeArea('T', num, num);
    cout << "Trianlge: Area = " << area << "sq.ft." << endl;


    return 0;

}

//function that receives on argument

float computeArea(float diameter) {
    float radius = (diameter / 2);
    return (3.141593 * (radius * radius));
}

//define the overloaded functions 

float computeArea(float width, float height) {
    return (width * height);
}

float computeArea(char letter, float width, float height) {
    return ((width /2 ) * height);
}

