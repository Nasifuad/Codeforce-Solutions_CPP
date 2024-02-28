#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    int count = 0, reverse_count = 0;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int len = a.length();
    for (int x = 0; x < len; x++)
    {
        a[x] = tolower(a[x]);
    }
    for (int x = 0; x < len; x++)
    {

        b[x] = tolower(b[x]);
    }

    if (a > b)
    {
        cout << 1;
    }
    else if (b > a)
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}