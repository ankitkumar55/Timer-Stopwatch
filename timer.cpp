
//  STOPWATCH USING C++:

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main()
{
    system("color f2");                         // for background color of screen
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // for the text color
    char a, b;

    SetConsoleTextAttribute(h, 14);
    cout << "\n\n\t\t press 'S' then enter, to start";
    cin >> a;
    if (a == 's' || 'S')
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                for (int k = 0; k < 60; k++)
                {
                    system("CLS");
                    SetConsoleTextAttribute(h, 13);
                    cout << "\n\n\t\t******************************";
                    SetConsoleTextAttribute(h, 12);
                    cout << "\n\t\t\t** STOPWATCH **";
                    SetConsoleTextAttribute(h, 13);
                    cout << "\n\t\t******************************";
                    SetConsoleTextAttribute(h, 14);
                    cout<<"\n \n \t \t \t";
                    cout << i << " : " << j << " : " << k;
                    SetConsoleTextAttribute(h, 13);
                    cout<<"\n\n\t\t******************************";
                    SetConsoleTextAttribute(h, 12);
                    cout<<"\n\n\t\tpress 'ctr + c' to stop";
                    for (int l = 1; l < 22999; l++)
                    {
                        for (int p = 1; p < 49990; p++)
                        {
                            p = p + 1;
                        }
                        l = l + 1;
                    }
                }
            }
        }
    }

    return 0;
}
