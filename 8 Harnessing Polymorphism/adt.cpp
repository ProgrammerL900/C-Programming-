/**
 * @file adt.cpp
 * @author your name (you@domain.com)
 * @brief Making abstract date types
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/*base ADT Shape
*three virtual methods
*/
class Shape
{
    public:
    virtual int getArea() = 0;
    virtual int getEdge() = 0;
    virtual void Draw() = 0;
};

/*derived class Rect
*two private variable
*/
class Rect: public Shape
{
    private:
    int height, width;

    /*public constructor and destructor*/
    public:
    Rect(int intitWidth, int initHeight)
    {
        height = initHeight;
        width = intitWidth;
    }
    ~Rect();

    /*three public methods to override pure virtual methods*/
    int getArea() {return height*width;};
    int getEdge() {return(2*height) + (2*width);}

    void Draw()
    {
        for(int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {cout << "x ";}
            cout << endl;}
        }
    
};

/*main method
*two intances of derived Rect
*repesent Square and Qudrilateral shape
*/
int main() 
{
    Shape* pQuard = new Rect(3, 7);
    Shape* pSquare = new Rect(5,5);
    //Add more statements here.
    //calls to each method
    pQuard -> Draw();
    cout << "Area is " << pQuard -> getArea() << endl;
    cout << "Perimeter is " << pQuard ->getEdge() << endl;

    pSquare -> Draw();
    cout << "Area is " << pSquare -> getArea() << endl;
    cout << "Permeter is " << pSquare -> getEdge() << endl;

    return 0;
}


