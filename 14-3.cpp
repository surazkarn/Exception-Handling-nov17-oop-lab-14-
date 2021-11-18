// 3. Question no 2 try to do with using function.

#include <iostream>
using namespace std;

void input();
int main()

{

    try

    {
        input();
    }

    catch (float n)

    {

        cout << " Zero Entered\n";
    }
    catch (char s)

    {

        cout << "Positive Exception\n";
    }
    catch (int y)

    {

        cout << "Negative Exception\n";
    }

    return 0;
}

void input()

{

    int num;

    cout << "Enter a number:";

    cin >> num;

    if (num == 0)

        throw(float) num;
    else if (num > 0)

        throw('p');

    else

        throw num;
}