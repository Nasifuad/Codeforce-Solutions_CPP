#include <iostream>
using namespace std;
int main()
{
    int arr[100][100], r, c, move = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
                move = abs(2 - r) + abs(2 - c);
                cout << move;
            }
        }
    }
    return 0;
}