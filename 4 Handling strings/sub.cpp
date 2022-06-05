/**
 * @file sub.cpp
 * @author Laura Wilson (you@domain.com)
 * @brief CReplacing substrings pg 76
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
    //iitialized string variable

    string text = "I do like the seaside";
    cout << "Original: " << text << endl;
    //Add more statments here

    /**insert a substring at index porsition 10
     */

    text.insert(10, "to be beside ");
    cout << "Inserted: " << text << endl;

    /** erase two characters from string value
     * starting at index three
     */

    text.erase(2, 3);
    cout << "Erased: " << text << endl;

    /** removed 25 characters at index position seven
     * insert a replacement substring 
     */

    text.replace(7, 25, "strolling by the sea");
    cout << "Replaced: " << text << endl;

    /** output nine copited characteres 
     * at index seven
     */

    cout << "Copied: " << text.substr(7, 9) << endl;
    cout << "Last characters: " << text.at(text.size() - 1) << endl;    

    return 0;
}
