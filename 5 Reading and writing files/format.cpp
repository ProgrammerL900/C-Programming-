/**
 * @file format.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Formatting with getline pg 86
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <fstream> 
#include <string> 
#include <iostream>
using namespace std; 

//main function 

int main() {
    /** four variable declared
     * fixed number, string array, and two counter variables. 
     */ 
    const int RANGE = 12; 
    string tab[ RANGE ];
    int i = 0, j = 0;
    
    //create input filstream object 
    
    ifstream reader("records.txt");

    //Statement to exit ules filestream object exist
    
    if (!reader) {
        cout << "Error opening input file" << endl;
        return -1;
    }

    /** loop that reads each line into string array */
    while (!reader.eof()) {
        if ((i+1) % 4 == 0)
            getline(reader, tab[ i++ ], '\n');
        else 
            getline(reader, tab[ i++ ], '\t');
    }

    //close filestream and reset counter

    reader.close();
    i = 0;

    /** loop to output the data stored in 
     * each array element, formatted with 
     * descriptions and newlines */

    while (i < RANGE) {
        cout << endl << "Record number: " << ++j << endl;
        cout << "Forename: " << tab[ i++ ] << endl;
        cout << "Surname: " << tab[ i++ ] << endl;
        cout << "Department: " << tab[ i++ ] << endl;
        cout << "Telephone: " << tab[ i++ ] << endl;
    }

    return 0;
}