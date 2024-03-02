#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int len = 0;
    getline(cin, s);
    int n = s.length();
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1] && i < n - 1)
        {
            len++;
        }
    }
    len = n - len;

    if (len % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}