#include <iostream>
using namespace std;

int main()
{
    int n;
    string arr[1000];
    string new_array[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        string demo_array[1000];
        int string_size = arr[i].length();
        if (string_size >= 11)
        {
            string st = arr[i];
            int len = st.length();
            char first = st[0];
            char last = st[len - 1];
            int number = len - 2;
            // string num_str = to_string(number);
            string new_string = first + to_string(number) + last;
            new_array[i] = new_string;
        }
        else
        {
            new_array[i] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << new_array[i] << "\n";
    }

    return 0;
}