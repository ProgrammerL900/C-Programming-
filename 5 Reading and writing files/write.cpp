/**
 * @file write.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Writing a file pg 80
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <fstream>      //Include filestream support 
#include <string> 
#include <iostream>
using namespace std;

//main function 

int main() {
    //string variables

    string poem = "\n\tI never saw a man who looked";
    poem.append( "\n\tWith such a wistful eye" );
    poem.append( "\n\tUpon that little tent of blue" );
    poem.append( "\n\tWhich prisoners call the sky" );
    //Add more statements here 

    ofstream writer("poem.txt");

    if (!writer) {
        cout << "Error opening file for output" << endl;
        return -1; //Signal an error then exit the program
    }

    writer << poem << endl; //Write output 
    writer.close(); //Close filstream

    return 0;
}
