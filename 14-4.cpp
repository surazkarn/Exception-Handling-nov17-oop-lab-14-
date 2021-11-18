// 4. Question no 2 try to do using three dot(.) mechanism.

#include <iostream>

using namespace std;
int main()
{
    int num;

    cout << "Enter a number :";
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
        cout << " Zero  Exception\n";
    }

    catch (char s)

    {

        cout << " Positive Exception\n";
    }
    catch (...)
    {
        cout << "Negative Exception\n ";
    }

    return 0;
}