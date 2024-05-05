/**
 * @file capability.cpp
 * @author your name (you@domain.com)
 * @brief Providing capability classes pg 140
 * @version 0.1
 * @date 2024-05-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*Base capability class Bird
*two virtial methods signal an error of called explicitly
*/
class Bird
{
    public:
    virtual int Talk() const {return -1;}
    virtual int Fly() const {return -1;}
};

/*derived class Pigeon
*two methods to override base class
*/
class Pigeon : public Bird
{
    public:
    int Talk() const
    {cout << "Coo! Coo!" << endl; return 0;}

    int Fly() const
    {cout << "A pigeon flies away..." << endl; return 0;}
};

/*derived class Chicken
*methods to override base class
*/
class Chicken : public Bird
{
    public:
    int Talk() const
    {cout << "Cluck! Cluck!" << endl; return 0;}

    int Fly() const
    {cout << "I\'m just a chicken -- I can\'t fly!"
                                << endl; return 0;}
};

/*main method
*breate base class pointers 
*binding derived class
*/
int main() 
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;

    /*method calls and statement to terminate program
    *when error is met by explicityly calling base
    */
   pPigeon -> Talk();
   pChicken ->Talk();

   pPigeon -> Bird::Talk();
   if (-1) {cout << "Error! - Program ended."
                            << endl; return 0;}

    pPigeon ->Fly();        //Call will not be made
    pChicken ->Fly();      //Call will not be made
    return 0;             //Statement will not be executed

}