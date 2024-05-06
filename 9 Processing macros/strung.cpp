/**
 * @file strung.cpp
 * @author your name (you@domain.com)
 * @brief Building strings pg 164
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#define LINEOUT(str)cout << #str << endl

#define GLUEOUT(a,b) cout << a##b << endl
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    //Program goes here.
    string longerline = "They carried a net ";
    longerline += "and their hearts were set";

    LINEOUT(In a bowl to sea went wise men three);
    LINEOUT(On a brillent night             june);
    GLUEOUT(longer, line);
    LINEOUT(On fishing up the moon);

    return 0;
}