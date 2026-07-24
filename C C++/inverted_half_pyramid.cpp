#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}