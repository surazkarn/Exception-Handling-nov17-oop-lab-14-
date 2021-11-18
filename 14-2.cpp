// 2. Wap to create exception if user enter 0 it raise exception "zero entered" if enter negative it raise "Negative Exception" if enter positive then it raise "Positive Exception".

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    try
    {
        if (num == 0)
            throw(float) num;
        else if (num > 0)
            throw('p');
        else
            throw num;
    }
    catch (float n)
    {
        cout << "Zero Exeption\n";
    }
    catch (char s)
    {
        cout << "Positive Exeption\n";
    }

    catch (int y)
    {
        cout << "Negative Exeption\n";
    }
    return 0;
}