//14.5 Wap to enter your age if age not in 1-100 it raise invalid age.

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if (age < 1 || age > 100)
            throw string("Invalid age");
        else
            cout << "Age is valid" << endl;
    }

    catch (string e)

    {
        cout << e << endl;
    }
    return 0;
}
