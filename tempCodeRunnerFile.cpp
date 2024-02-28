
    for (int i = 0; i < len; i++)
    {

        if (a[i] == b[i])
        {
            count = count;
        }
        else if (a[i] > b[i])
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }
    cout << count;
    return 0;