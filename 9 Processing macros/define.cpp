/**
 * @file define.cpp
 * @author your name (you@domain.com)
 * @brief Defining substities pg 154
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*declaring three define directives*/
/*comment out BOOK and NUM defines then do
*command: c++ -DNUM=50 -DBOOK=\""XML is easy steps"\" define.cpp -o define.exe
*/
#define BOOK "C++ Programming in easy steps"
#define NUM 200
#define RULE "*****************************"

/*library classes to include and namespace*/
#include <iostream>
using namespace std;

/*main function 
*three statements to output substitied values
*/
int main() 
{
    cout << RULE << endl << BOOK << endl << RULE;
    cout << endl << "NUM is: " << NUM << endl;
    cout << "Double NUM: " << ((NUM) * 2) << endl;
    return 0;
}