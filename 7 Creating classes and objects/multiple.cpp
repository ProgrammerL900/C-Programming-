/**
 * @file multiple.cpp
 * @author your name (you@domain.com)
 * @brief Creating multiple objects pg 120
 * @version 0.1
 * @date 2022-06-21
 * @date 2024-05-3 (update)
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

/*
void setAge(int yrs) {age = yrs;}
void setWeight (int lbs) {weight = lbs;}
void setColor (string hue) {color = hue;}
*/

/* Replace three setter methods with
* single combined setter protoype
*/

void setValue(int, int, string);

/**
 * public getter methods 
 * retrieve individual values from each 
 * private variables
 */

int getAge() {return age; }
int getWeight() {return weight;}
string getColor() {return color;}

};

/** 
 *  after Dog class declaration 
 * add definition block for protype
 * 
 */

void Dog::setValue(int age, int weight, string color)
{
    /**
     * In method defintion 
     * add three statemets to assign
     * values from passed arguments to class variables
     */

 this -> age = age;
 this -> weight = weight;
 this -> color = color;
}

//main method  declared 

int main() {

//declare instance of Dog class

Dog fido;
/* replace setter with single call to combined setter method

//calls setter methods

fido.setAge(3);
fido.setWeight(15);
fido.setColor("brown");
*/

fido.setValue(3, 15, "brown");

/* main method declare second instance*/
Dog pooch;

/*add second call to combined setter method*/
pooch.setValue(4, 18, "gray");


//calls getter methods 

cout << "Fido is a " << fido.getColor() << " dog" << endl;
cout << "Fido is a " << fido.getAge() << " years old" << endl;
cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

cout << "Pooch is a " << pooch.getAge();
cout << " year old " << pooch.getColor();
cout << " dig who weighs " << pooch.getWeight();
cout << " pounds. ";

//call to bark 
/* second call*/

pooch.bark();
fido.bark();
    return 0;




}

