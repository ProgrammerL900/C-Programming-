/**
 * @brief Isolating class structures
 * pg 146
 * 
 */
/*header file class calculator*/
class Calculator
{
    /*insert public method declarations*/
public:    
    Calculator();       //(Constructor) to set initial status
    void launch();      //To display intial instructions
    void readInput();   //To get expression
    void writeOutput(); //To display result
    bool run();         ///(Accessor) To get current status

/*insert private variable declarations*/
private:
    double num1, num2;      //To store input numbers.
    char oper;              //To store intput operater
    bool status;            //To store current status
    
};