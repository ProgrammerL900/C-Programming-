/**
 * @file overloaded.cpp
 * @author your name (you@domain.com)
 * @brief Overloading methods pg 124
 * @version 0.1
 * @date 2024-05-03
 * 
 * @copyright Copyright (c) 2024
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

/*add inline an overloaded bark method*/

void bark(string noise) {cout << noise << endl; }

/*declare constructor method*/
Dog();
Dog(int, int);


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
/* replace setValue with constructor*/

//void setValue(int, int, string);

Dog(int, int, string);

/* associated destructor*/
~Dog();

/**
 * public getter methods 
 * retrieve individual values from each 
 * private variables
 */

int getAge() {return age; }
int getWeight() {return weight;}
string getColor() {return color;}

};

/*add defintion for default constructor method*/

Dog::Dog()
{
    age = 1;
    weight = 2;
    color = "black";
}

/*add defintion for overloaded constructor*/

Dog::Dog(int age, int weight)
{
    this -> age = age;
    this -> weight = weight;
    this -> color = "white";
}







/* after dog class declaration 
* replace setValues defintion with constructor block*/


/** 
 *  after Dog class declaration 
 * add definition block for protype
 * 
 */


/*
void Dog::setValue(int age, int weight, string color)

{
    /**
     * In method defintion 
     * add three statemets to assign
     * values from passed arguments to class variables
     */
/*
 this -> age = age;
 this -> weight = weight;
 this -> color = color;
}
*/


Dog::Dog(int age, int weight, string color) {
  /*insert 3 statements to assign values from passed arguments
  */
 this -> age = age;
 this -> weight = weight;
 this -> color = color;  
}

/*add destructor block*/
Dog::~Dog(){
    /*statement to output confirmation*/
    cout << "Object destroyed." << endl;
}


//main method  declared 

int main() {

/*insert statment to create Dog object w/out any arguments*/
Dog rex;


//declare instance of Dog class
//edit fido object
Dog fido(3, 15, "brown");

/* replace setter with single call to combined setter method

//calls setter methods

fido.setAge(3);
fido.setWeight(15);
fido.setColor("brown");
*/


/*delete fido and pooch setValues*/

//fido.setValue(3, 15, "brown");

/* main method declare second instance*/

//Edit pooch statement
Dog pooch(4, 18, "gray");

/*add second call to combined setter method*/

/*delete fido and pooch setValues
*constructor replaced method
*/

//pooch.setValue(4, 18, "gray");


//calls getter methods 

cout << "Fido is a " << fido.getColor() << " dog" << endl;
cout << "Fido is a " << fido.getAge() << " years old" << endl;
cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

fido.bark();


cout << "Pooch is a " << pooch.getAge();
cout << " year old " << pooch.getColor();
cout << " d0g who weighs " << pooch.getWeight();
cout << " pounds. ";

pooch.bark();


/*statements to retrieve default values*/

cout << "Rex is a " << rex.getAge();
cout << " year old " << rex.getColor();
cout << " dog who weighs " << rex.getWeight();
cout << " pounds. ";

/*overloaded output method*/
rex.bark("GRRR!");



/*create Dog object passing two arg to call overoaded constructor*/
Dog sammy(2, 6);

/*add statements to retreive values*/
cout << "Sammy is a " << sammy.getAge();
cout << " year old " << sammy.getColor();
cout << " dog who weighs " << sammy.getWeight();
cout << " pounds. ";
sammy.bark("BOWOW!");

    
    return 0;
}