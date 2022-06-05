/**
 * @file except.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Handling errors pg 94
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdexcept>    //Support standard exception 
#include <typeinfo>     //Suppoert type information 
#include <fstream>
#include <string> 
#include <iostream>
using namespace std; 

//main function 

int main() {
    /** two initialized variable declared 
     * and statement outputting a text message */

    string lang = "C++";
    int num = 1000000000;    //One billion
    //Try-catch block goes here 
    /** attempting to replace part of string value */
    
    try {  //lang.replace(100, 1, "C") ;
        /**attempting to resize variable */

      //lang.resize(3 * num);

      /** attempting to open a non-existent file */
      ifstream reader("nonsuch.txt");
      if (!reader) throw logic_error("File not found");


     }
    
    /** handle a range exception */

    catch (out_of_range &e)
    {
        cerr << "Range Exception: " << e.what() << endl;
        cerr << "Exception Type: " << typeid(e).name();
        cerr << endl << "Prgram terminated." << endl;
        return -1;
    }

    /** second catch block to handle 
     * general exceptions */

    catch (exception &e) 
    {
        cerr << "Exception: " << e.what() << endl;
        cerr << "Exception Type: " << typeid(e).name() << endl;
    }

    cout << "Program continues..." << endl;


    return 0;
}