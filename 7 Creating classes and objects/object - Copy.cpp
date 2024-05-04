/**
 * @file object.cpp
 * @author your name (you@domain.com)
 * @brief Creating an object pg 118
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string> 
#include <iostream>
using namespace std;

//class named dog 

class Dog {
//three private variables 

int age, weight;
string color;

//public access specifer 

public: void bark() { cout << "WOOF!" << endl;}

/* public setter methods 
* assigns individuals values to each 
* private variable
*/

void setAge(int yrs) {age = yrs;}
void setWeight (int lbs) {weight = lbs;}
void setColor (string hue) {color = hue;}

/**
 * public getter methods 
 * retrieve individual values from each 
 * private variables
 */

int getAge() {return age; }
int getWeight() {return weight;}
string getColor() {return color;}

};

//main method  declared 

int main() {

//devlare instance of Dog class

Dog fido;
//calls setter methods

fido.setAge(3);
fido.setWeight(15);
fido.setColor("brown");

//calls getter methods 

cout << "Fido is a " << fido.getColor() << " dog" << endl;
cout << "Fido is a " << fido.getAge() << " years old" << endl;
cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

//call to bark 

fido.bark();

    return 0;
}