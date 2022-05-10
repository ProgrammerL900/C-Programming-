/**
 * @file constant.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Declaring constants pg 22
 * @version 0.1
 * @date 2022-05-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream> 
using namespace std;

int main() {
    //Program 

    /**
     * @brief states that declare constant and output
     * using the constant value
     * 
     */
    const double PI = 3.1415926536;
    cout << "6\" circle circumference: " << (PI * 6) << endl;

    /**
     * @brief statement to declare an enumerated
     * list of constants, and output using 
     * some of those constant values.
     * 
     */
    enum 
    {RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};
    cout << "I shot a red worth: " << RED << endl;
    cout << "Then a blue worth: " << BLUE << endl;
    cout << "Total scored: " << (RED + BLUE) << endl;

    /**
     * @brief statements to declare custon data types
     * and output its assigned values.
     * 
     */
    typedef enum {NEGATIVE, POSITIVE} charge;
    charge neutral = NEGATIVE, live = POSITIVE;
    cout << "Neutral wire: " << neutral << endl;
    cout << "Live wire: " << live << endl;

    return 0;
}