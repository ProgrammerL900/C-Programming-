/**
 * @file prog.cpp
 * @author your name (you@domain.com)
 * @brief Exploring compilation pg 152
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;

/** commands to save temporary files and -c option to compile program
 * command to output an executable file from .o file
 *  c++ prog.cpp -save-temps -c
 * c++ prog.cpp -o prog.exe
 * .\prog
 * c++ prog.cpp -save-temps -o prog.exe
*/

int main()
{
    cout << "This is the simple test program" << endl;
    return 0;
}