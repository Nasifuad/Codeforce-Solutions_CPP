class Solution
{
public:
    string maximumOddBinaryNumber(string a)
    {
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '1')
            {
                count++;
            }
        }
        if (count == 1)
        {
            for (int i = 0; i < a.length(); i++)
            {
                a[i] = '0';
                a[a.length() - 1] = '1';
            }
        }
        else
        {
            if (a[a.length() - 1] == '1')
            {
                for (int j = 0; j < count - 1; j++)
                {
                    a[j] = '1';
                }
                for (int j = count - 1; j < a.length() - 1; j++)
                {
                    a[j] = '0';
                }
            }
            else
            {
                for (int z = 0; z < count - 1; z++)
                {
                    a[z] = '1';
                }
                for (int j = count - 1; j < a.length(); j++)
                {
                    a[j] = '0';
                    a[a.length() - 1] = '1';
                }
                // for (int j = count; j < a.length(); j++)
                // {
                //     a[j] = '0';
                //     a[a.length() - 1] = '1';
                // }
            }
        }
        return a;
    }
};