/**
 * @file override.cpp
 * @author your name (you@domain.com)
 * @brief Overriding base methods pg 130
 * @version 0.1
 * @date 2024-05-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <string>
#include <iostream>
using namespace std;

/*Base class named Man*/
class Man
{
    //class memebers go here.
    /*public access and inline output method*/
    public :
        void speak() {cout << "Hello!" << endl;}    

    /*overloaded inline output method*/
    void speak(string msg)
    {cout << "  " << msg << endl;}    

};

/*class named Hombre dervied from Man class*/
class Hombre : public Man
{
    //class members go here.
    /*access specifier and method 
    * that overrides outloaded base class method
    * without a tab output*/
    public :
    void speak(string msg) {cout << msg << endl;}
};

/*main method*/
/*final return statment and two objects
* instance of base and instance of derived*/
int main()
{
    Man henry;
    Hombre enrique;
    //Add more statements here.
    
    /*statements calling both methods of the base class*/
    henry.speak();
    henry.speak("It's a beautiful evening.");

    /*calling overriding method in derived class*/
    enrique.speak("Hola!");

    /*statement explicitly calling overrrides mehtod in base class*/
    enrique.Man::speak("Es una tarde hermosa.");
    return 0;
}
