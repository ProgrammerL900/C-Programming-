/**
 * @file read.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Reading characters & lines pg 84
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <fstream>  //Include firestream support 
#include <iostream> 
#include <string> //Added to make efficient 
using namespace std;

//Main function 

int main() {

    /**two variable declared
     * one to store a character 
     * one to count loop iterations 
     */ 

    string line; //Was char letter 
    int i;
    //Add more statements here 
    //input filestream object 

    ifstream reader ("poem.txt");

    /** Exit unless filestream object
     * exist
     */

    if (!reader) {
        cout << "Error opening input file" << endl;
        return -1;      //Signla an error then exit the program 

    } else {
        /** loop to read text file 
     * assign each character to the variable and output 
     * its value.
     */

        for (i = 0; !reader.eof(); i++) {
           /** reader.get(letter);
            cout << letter;
            */
           //Replaced to make more efficient and read lines
           getline(reader, line);
           cout << line << endl;
        }
    }

    /** close filestream and output total iterations 
     */

    reader.close();
    cout << "iterations: " << i << endl; 



    return 0;
}