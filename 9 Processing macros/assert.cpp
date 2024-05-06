/**
 * @file assert.cpp
 * @author your name (you@domain.com)
 * @brief Debugging assertions pg 166
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#define DEBUG 1

#if(DEBUG == 1) 
    //Defintion for "on" goes here
#define ASSERT(expr)
cout << #expr << "..." << num;
    
if (expr != true)
    {
    cout << "Fails in file: " << __FILE__;
    cout << " at line: " << __LINE__ << endl;
    }
else cout << "Succeeds" << endl;

#elif(DEBUG == 0)

    //Defintion for "off" goes here
#define ASSERT(result)
cout << "Number is " << num << endl;
#endif

#define ASSERT(result)
cout << "Number is " << num << endl;

#include <iostream>
using namespace std;

int main() 
{
    //Program goes here.
    int num = 9; ASSERT(num < 10);
    num++; ASSERT(num < 10);
    
    return 0;

}