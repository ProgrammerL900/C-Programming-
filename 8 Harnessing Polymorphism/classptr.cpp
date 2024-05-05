/**
 * @file classptr.cpp
 * @author your name (you@domain.com)
 * @brief Pointing to classes pg 134 
 * @version 0.1
 * @date 2024-05-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/* Base class
*output a passed integer in hexadecimal
*/
class Base
{
    public:
    void Identify(int adr) const
    {
        cout << "Base class called by 0x"
                      << hex << adr << endl;       
    }
};

/*derived classes*/
class SubA : public Base {  };
class SubB : public Base {  };


/*main method*/
int main()
{
    //Program code goes here.


    /*statements to create two base class pointers
    * each binding to a specific derived class*/
   Base* ptrA = new SubA;
   Base* ptrB = new SubB;

   /*use pointers to call base class method*/
   ptrA -> Identify((int) &ptrA);
   ptrB -> Identify((int) &ptrB);

   return 0;
}