/**
 * @file basecon.cpp
 * @author your name (you@domain.com)
 * @brief Calling base constructors pg 128
 * @version 0.1
 * @date 2024-05-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*declare class named Parent*/
//Base class
class Parent
{
    //class members go here.

    //public access
    public:
        Parent()
        {cout << "Default Parent constructor called.";}
    
    /*overloaded constructor*/
    Parent(int a) 
    {cout << endl <<
    "Overloaded Parent constructor called.";}
};

/*Daughter class*/
class Daughter : public Parent
{
/*public access specifier and default constructor*/
    public:
        Daughter()
        {cout << endl <<
        "   Derived Daughter class default constructor called.";}

};

/*Son class*/
class Son : public Parent
{
/*public access and overloaded constructor*/
    public:
        Son (int a) : Parent(a)
        {cout << endl <<
        "   Derived Son class overloaded constructor called.";}
};

/*main method*/
/*final return statment
*creating instance of each derived class*/
int main()
{
    Daughter emma;
    Son andrew(0);
    return 0;
}