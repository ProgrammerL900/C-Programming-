/**
 * @file features.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Discovering string features pg 68
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>
#include <iostream>
using namespace std;

//function prototype
//single string data type argument

void computeFeatures(string);

//main function 

int main() {
    
    string text = "C++ is fun";
    //Add more statements here

   //call to defined function
    
    computeFeatures(text);

    //enlarge string value 

    text += " for everyone";
    computeFeatures(text);

    //reduce string value

    text = "C++ fun";
    computeFeatures(text);

    //empty string variable

    text.clear();
    computeFeatures(text);


    return 0;
}


//define and declared function to display string variable

void computeFeatures(string text) 
    {
        cout << endl << "String: " << text << endl;

        //output freatures of string variable

        cout << "Size: " << text.size();
        cout << "   Capacity: " << text.capacity();
        cout << "   Empty?: " << text.empty() << endl;
    }