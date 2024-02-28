#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0, d = 2, pis = 0;
    cin >> m >> n;
    sum = m * n;
    if (sum % 2 == 0)
    {
        pis = sum / d;
        cout << pis;
    }
    else if (sum == 0)
    {
        cout << 0;
    }
    else
    {
        sum = sum - 1;
        pis = sum / d;
        cout << pis;
    }
    return 0;
}