/**
 * @file derived.cpp
 * @author your name (you@domain.com)
 * @brief Inheriting class properties pg 126
 * @version 0.1
 * @date 2024-05-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*Polygon class*/

class Polygon
{
    protected:
    /*acessible only to members of this class 
    * and classes derived from this class*/

        int width, height;
   
    public:
    /*public method to assign values to those variables*/

        void setValues(int w, int h) {width = w; height = h; }
};

/*Rectangle class derives from Polygon class*/

class Rectangle : public Polygon
{
public:
/*unqiue method*/

    int area() { return (width * height); }
};

/*Triangle class that derives from Polygon class*/

class Triangle : public Polygon
{
    public:
        int area() { return ((width * height) / 2);}
};

/*main method with final return statement and instance of each*/

int main() 
{
    Rectangle rect; Triangle trgl;
/*calls to method inherited from Polygon*/
    rect.setValues(4, 5);
    trgl.setValues(4, 5);

/*Output value returned by unique method of each derived class*/

cout << "Rectangle area: " << rect.area() << endl;
cout << "Triangle area: " << trgl.area() << endl;


    return 0;
}