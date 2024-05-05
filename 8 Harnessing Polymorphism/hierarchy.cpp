/**
 * @file hierarchy.cpp
 * @author your name (you@domain.com)
 * @brief Building complex hierarchies pg 144
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;

/*base ADT Boat
*variable and accessor method together
*/
class Boat
{
    protected:
    int length;
    public:
    int getLength() {return length;}
    virtual void Model() = 0;
};

/*ADT class derived from Boat named Sailboat
*variable and accessor together 
*with pure virtual method
*/
class Sailboat : public Boat
{
    protected:
    int mast;
    public:
    int getMast() {return mast;}
    virtual void Boom() = 0;
};

/*regular class derived from Sailboat named Laser
*all member will allow public access
*/
class Laser :public Sailboat
{
    public:

    /*constructor method and destructor method*/
    Laser() {mast = 19; length = 35;}
    ~Laser();

    /*pure virtual methods*/
    void Model() {cout << "Laser Classic" << endl;}
    void Boom() {cout << "Boom: 14ft" << endl;}


};

/*main method
*creating an instance of the derived class
*on the bottom tier of the hierarachy
*/
int main() 
{
    Laser* pLaser = new Laser;
    //Add more statements here.
    /*calls to each defined method*/
    pLaser -> Model();
    cout << "Length: " <<
        pLaser -> getLength() << "ft" << endl;
    cout << "Height: " <<
        pLaser -> getMast() << "ft" << endl;
    pLaser ->Boom();
    
    
    return 0;
}
