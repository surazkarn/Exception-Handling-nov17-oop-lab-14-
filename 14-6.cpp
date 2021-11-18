// 6. Wap to enter employee details eno,ename,edesg,esal. if salary is zero or negative then it raise exception invalid salary otherwise display eno,ename,gross salary based TA=9% of basic HRA=15% of basic.

#include <iostream>
using namespace std;

int main()

{

    int eno, esal;

    char ename[20];

    cout << "Enter the employee details: ";
    cin >> eno >> ename >> esal;

    try
    {
        if (esal <= 0)
            throw "Invalid salary";

        else

        {

            int hra = esal * 15 / 100;

            int ta = esal * 9 / 100;

            int gross = esal + hra + ta;
            cout << "Employee details: " << endl;

            cout << "Employee no: " << eno << endl;
            cout << "Employee name: " << ename << endl;

            cout << "Employee gross salary:" << gross << endl;
        }
    }
    catch (const char *e)

    {
        cout << e << endl;
    }
    return 0;
}