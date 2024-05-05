/**
 * @file birds.cpp
 * @author your name (you@domain.com)
 * @brief Directing method calls pg 138
 * @version 0.1
 * @date 2024-05-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*base class Bird*/
class Bird
{
    public:
    virtual void Talk() const
    {cout << "A bird talks..." << endl;}

    virtual void Fly() const
    {cout << "A bird flies..." << endl;}
};

/*Derived class Pigeon
*methods to override those in base class
*/
class Pigeon : public Bird
{
    public:
    void Talk() const
    {cout << "Coo! Coo!" << endl;}

    void Fly() const
    {cout << "A pigeon flies away..." << endl;}
};

/*Derived class Chicken
*method to override base
*/
class Chicken : public Bird
{
    public:
    void Talk() const
    {cout << "Cluck! Cluck!" << endl;}

    void Fly() const
    {cout << "I\'m just a chicken -- I can\'t fly!" << endl;}
};

/*main method
*base class pointers binding derived classes
*/
int main() 
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;
    //Add more statements here.

    //calls to each method
    pPigeon ->Talk();
    pPigeon ->Fly();
    pChicken ->Fly();
    pChicken ->Talk();
    pPigeon ->Bird::Talk();
    pChicken -> Bird::Fly();        //Inappropriate call

    return 0;
}