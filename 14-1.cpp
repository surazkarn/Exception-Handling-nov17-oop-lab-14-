//1. Wap to display the Divide by zero exception(Arithmetic Exception).


#include <iostream>
#include <stdexcept>
// For using runtime_error
  
using namespace std;
  
// User defined class for handling exception
// Class Exception publicly inherits the runtime_error class
  
class Exception : public runtime_error {
public:
    // Defining constructor of class Exception that passes a string message to the runtime_error class
    Exception()
        : runtime_error("Math error: Attempted to divide by Zero\n")
    {
    }
};
  
// defining Division function
float Division(float num, float den)
{
  
    // If denominator is Zero
    // throw user defined exception of type Exception
    if (den == 0)
        throw Exception();
  
    // otherwise return the result of division
    return (num / den);
  
} // end Division
  
int main()
{
    float numerator, denominator, result;
    numerator = 12.5;
    denominator = 0;
  
    // try block calls the Division function
    try {
        result = Division(numerator, denominator);
  
        // this will not print in this example
        cout << "The quotient is " << result << endl;
    }
  
    // catch block catches exception if any
    // of type Exception
    catch (Exception& e) {
  
        // prints that exception has occurred
        // calls the what function using object of
        // the user defined class called Exception
        cout << "Exception occurred" << endl
             << e.what();
    }
  
}

#include<iostream>
#include<conio.h>
using  namespace std;
int main() {
    int a, b, c;
    float d;
    cout << "Enter the value of a:";
    cin>>a;
    cout << "Enter the value of b:";
    cin>>b;
    cout << "Enter the value of c:";
    cin>>c;

    try {
        if ((a - b) != 0) {
            d = c / (a - b);
            cout << "Result is:" << d;
        } else {
            throw (a - b);
        }
    } catch (int i) {
        cout << "Answer is infinite because a-b is:" << i;
    }
}