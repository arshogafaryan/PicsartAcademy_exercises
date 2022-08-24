#include <iostream>

int main()
{
    using namespace std;
    int space, rows = 3;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        cout << endl;
        for(space = 1; space <= rows-i; ++space)
        {
            cout << " ";
        }

        while(k != 2*i-1)
        {
            cout << "*";
            ++k;
        }
    }    
    for (int i = 0; i < 30; i++)
    {
        if (i % 6 == 0)
            cout << "\n";
        else
            cout << "*";
    }
    cout << endl;
    return 0;
}