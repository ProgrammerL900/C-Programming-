/**
 * @file macro.cpp
 * @author your name (you@domain.com)
 * @brief Using macro function pg 162
 * @version 0.1
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#define SQUARE(n) (n*n)
#define CUBE(n) (n * n * n)

#include <iostream>
using namespace std;

inline int square (int n ) {return (n * n);}
inline int cube (int n) {return (n * n * n);}

int main()
{
    //Program code goes here.
    int num = 5;

    cout << "Macro SQUARE: " << SQUARE(num) << endl;
    cout << "Inline square: " << square(num) << endl;
    cout << "Macro CUBE: " << CUBE(num) << endl;
    cout << "Inline cube: " << cube(num) << endl;
    return 0;
}