/**
 * @file find.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief Finding substrings pg 74
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>
#include <iostream>
using namespace std;

//main function 

int main() {
    /** initialized string variable declaration 
     * declaring int variable to store seach results
     */

    string text = "I can resist anything but temptation.";
    int num;
    //Add more statments here

    //output start position of substring
    
    num = text.find("resist", 0);
    cout << "Position: " << num << endl;

    /** statement to seek non-existent 
     * substring within string variable
     */

    num = text.find("nonsuch", 0);
    cout << "Result: " << num << endl;

    /** statement to output start position
     * of first occurrence any characters of an "If" 
     * substrong
     */

    num = text.find_first_of("If");
    cout << "First I: " << num << endl;

    /** statement to report the string position of the first 
     * character not within the "If" substring
     */   

    num = text.find_first_not_of("If");
    cout << "First not I: " << num << endl;

    /** seek the last occurence of the letter "t" within 
     * string variable
     */

    num = text.find_last_of("t");
    cout << "Last t: " << num << endl;

    /** report the string position of the last character within
     * the string variable that isn't t
     */

    num = text.find_last_not_of("t");
    cout << "Last not t: " << num << endl;  




    return 0; 

}