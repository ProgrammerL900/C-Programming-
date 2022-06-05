/**
 * @file append.cpp
 * @author Laura Wilson  (you@domain.com)
 * @brief Appending to a file pg 82
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
    /** building a text string
     * in a string variable */

    string info = "\n\tThe Ballad of Reading Gaol";
    info.append("\n\t\t\tOscar Wilde 1898");
    //Add more statements 
    /** output filestream object -- 
     * specifying a file mode that will append to existing text */

    ofstream writer ("poem.txt", ios::app);

    /** statements to append the string to the file or exit */

    if (!writer) {
        cout << "Error opening file for output" << endl;
        return -1;      //Signal an error then exit the program 
    }

    writer << info << endl;     //Append output 
    writer.close();             //Close filestream 
    




    return 0; 

}