/**
 * @file else.cpp
 * @author your name (you@domain.com)
 * @brief providing alternatives pg 158
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*conditional test to seek the 
* _WIN32 and __linux macros*/
#if defined _WIN32
  #define PLATFORM "Windows"
#elif defined __linux
  #define PLATFORM "Linux"
#endif

/*library classes*/
#include <iostream>
using namespace std;

/*main function*/
int main() 
{       /*id host platform*/
    cout << PLATFORM << " System" << endl;
    
    /*statements to execute for specific platforms*/
    if (PLATFORM == "Windows")
        cout << "Performing Windows-only tasks..." << endl;
    if (PLATFORM == "Linux")
        cout << "Performing Linux-only task..." << endl;
    
    return 0;
}