/**
 * @file virtual.cpp
 * @author your name (you@domain.com)
 * @brief Calling a virtual method pg 136
 * @version 0.1
 * @date 2024-05-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*Base class Parent
*contains regular method declaration and virtual method declare
*/
class Parent
{
    public:
    void Common() const
    { cout << "I am part of this family, ";}

    virtual void Identify() const
    { cout << "I am the parent" << endl;}
};

/*derived class Child
*contains method to override the virtual base method
*/
class Child : public Parent
{
    public:
    void Identify() const 
    {cout << "I am the child" << endl;}
};

/*Grandchild derived from Child
*method to override the virtual base method nd regular declaration
*/
class Grandchild : public Child
{
    public:
    void Identify() const
    {cout << "I am the grandchild" << endl;}

    void Relate() const
    {cout << "Grandchild has parent and grandparent";}
};

/*main method
*creates instances of each derived class 
*plus base class pointers binding those derived classes
*/
int main() 
{
    Child son; 
    Grandchild grandson;
    Parent* ptrChild = &son;
    Parent* ptrGrandchild = &grandson;
    //Add more statements here.
    
    /*calls to each method*/
    ptrChild -> Common();       //Inherited
    ptrChild -> Identify();     //Overriding
    
    ptrGrandchild ->Common();   //Inherited
    ptrGrandchild ->Identify(); //Overriding

    ptrChild -> Parent::Common();   //Explicit
    ptrChild -> Parent::Identify(); //Explicit
    grandson.Relate();              //Via instance
    
    return 0;
}