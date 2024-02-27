#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cin >> n;
    int problem_solved = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < 3; j++)
        {

            cin >> arr[j];
            count += arr[j];
        }
        if (count > 1)
        {
            problem_solved += 1;
        }
    }

    cout << problem_solved;
    return 0;
}