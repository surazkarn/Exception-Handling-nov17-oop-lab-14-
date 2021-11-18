// 7. Wap to create two class Father and Son. Data member fname,fage,sname,sage. If father age is less than son age then it raise exception "Son age is exceed than father".

#include <iostream>
#include <conio.h>

using namespace std;

class Father
{

    int fage;
    string fname;

public:
    void getdata()
    {

        cout << "Enter father name: ";

        cin >> fname;

        cout << "Enter father Age: ";

        cin >> fage;
    }
    int getage() { return fage; }
};

class Son
{

    int sage;

    string sname;

public:
    void getdata()
    {

        cout << "Enter son name:";
        cin >> sname;

        cout << "Enter son Age: ";

        cin >> sage;

        cin >> sage;
    }

    int getage() { return sage; }
};

int main()
{

    Father f;

    Son s;

    f.getdata();

    s.getdata();

    try
    {
        if (f.getage() < s.getage())
        {
            throw string("Son age is more than father");
        }
    }
    catch (string out)
    {
        cout << out << endl;
    }

    return 0;
}