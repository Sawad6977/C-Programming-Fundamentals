#include <bits/stdc++.h>
using namespace std;

main()
{
    int arr[] = {10, 2, 3, 1, 14, 12, 5, 11, 20, 7};
    int n = 10;

    int odd[10], even[10];
    int o = 0, e = 0;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[o] = arr[i];
            o++;
        }
        else
        {
            even[e] = arr[i];
            e++;
        }
    }


    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
    }

    for (int i = 0; i < e; i++)
    {
        cout << even[i] << " ";
    }

    cout << endl;

}

