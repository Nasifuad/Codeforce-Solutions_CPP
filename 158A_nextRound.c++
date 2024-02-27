#include <iostream>
using namespace std;

int main()
{
    int n, k, c = 0;
    int arr[100];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k_score = arr[k - 1];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= k_score && arr[i] != 0)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}