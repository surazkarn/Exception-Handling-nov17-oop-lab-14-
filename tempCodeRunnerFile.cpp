
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