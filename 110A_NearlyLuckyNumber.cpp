
#include <iostream>
#include <string>

using namespace std;

void lucky(long long n)
{
    string str = to_string(n); // Convert number to string
    // cout << str << endl;  // Output the string representation

    int count = 0;
    for (char c : str)
    { // Iterate through each character in the string
        if (c == '4' || c == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    long long userInput;
    cin >> userInput;

    lucky(userInput);

    return 0;
}
