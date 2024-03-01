#include <iostream>
using namespace std;
int main()
{
    string arr;
    int count1 = 0, count2 = 0, count3 = 0;
    cin >> arr;

    for (int i = 0; i < arr.length(); i += 2)
    {
        if (arr[i] == '1')
        {
            count1++;
        }
        else if (arr[i] == '2')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    string brr;
    for (int i = 0; i < count1; i++)
    {
        brr[i] = '1';
    }
    for (int i = count1; i < (count1 + count2); i++)
    {
        brr[i] = '2';
    }
    for (int i = count1 + count2; i < (count1 + count2 + count3); i++)
    {
        brr[i] = '3';
    }
    cout << brr;
    return 0;
}