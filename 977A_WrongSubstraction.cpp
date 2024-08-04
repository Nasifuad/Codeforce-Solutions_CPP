
#include <iostream>
using namespace std;

int subtract(int a, int b)
{
    int after = a;
    for (int i = 0; i < b; ++i)
    {
        if (a / 10 > 1)
        {
            if (after % 10 == 0)
            {
                after = after / 10;
            }
            else
            {
                after = after - 1;
            }
        }
        else
        {
            after = after - 1;
        }
    }
    return after;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int result = subtract(a, b);
    cout << result;

    return 0;
}