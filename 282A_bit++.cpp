#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, not_count = 0, sum;
    string s[100],
        str[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "X++" || s[i] == "++X")
        {
            count++;
        }
        else
        {
            not_count += 1;
        }
    }
    sum = count - not_count;
    cout << sum;
    return 0;
}