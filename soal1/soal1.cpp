#include<iostream>

using namespace std;

int main()
{
    int A,B,X,Y;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;

    X = A;
    Y = B;
    if(X != Y )
        {if ( X < Y )
            { X = X + A;}
        else
            { Y = Y + B;}
        }

    cout << X;


    }
