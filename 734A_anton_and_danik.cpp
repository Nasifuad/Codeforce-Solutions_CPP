#include <iostream>
using namespace std;

int main()
{
    string n;
    int i;
    cin >> i;
    cin >> n;

    int count_a = 0, count_d = 0;

    for (int j = 0; j < i; j++)
    {
        if (n[j] == 'A' || n[j] == 'a')
        {
            count_a++;
        }
        else
        {
            count_d++;
        }
    }
    if (count_a > count_d)
    {
        cout << "Anton";
    }
    else if (count_d > count_a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}