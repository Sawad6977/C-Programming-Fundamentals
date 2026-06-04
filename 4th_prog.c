#include <stdio.h>
int main()
{
    int n =6;
    int ar[]= {64, 34, 25, 12, 22, 11, 90};
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (ar[j]>ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        printf("%d ", ar[i]);
    }

}

