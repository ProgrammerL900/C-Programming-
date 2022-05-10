/**
 * @file vector.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Employing vector arrays pg 20.
 * @version 0.1
 * @date 2022-05-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <vector>  //include vector support 
#include <iostream> 
using namespace std;

int main() {
    //Program 

    /** initalized a vector array of three elements of
    //value 100
    */

    vector <int> vec(3, 100);

    /**
     * @brief statements to manupulate the vector elements.
     * 
     */
    cout << "Vector size: " << vec.size() << endl; // gets number of elements
    cout << "Is empty?: " << vec.empty() << endl; //checks if empty
    cout << "First element: " << vec.at(0) << endl; //gets value at element 0

    vec.pop_back(); //Remove final element 
    cout << "Vector size: " << vec.size() << endl; //vector size
    cout << "Final element: " << vec.back() << endl; //gets final element

    vec.clear(); //Remove all elements
    cout << "Vector size: " << vec.size() << endl; //vector size

    vec.push_back(200); //Add an element
    cout << "Vector size: " << vec.size() << endl;  //vector size
    cout << "First element: " << vec.front() << endl; //gets first element



    return 0;
}
