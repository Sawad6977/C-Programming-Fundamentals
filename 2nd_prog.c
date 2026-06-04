#include<stdio.h>
#include<string.h>
int main()
{
    char st[30];
    int  c = 0;
    scanf("%s",st);
    int r =strlen(st);
    for(int i =0,j=r-1; i<r; i++,j--)
    {
        if(st[i]==st[j])
        {
            c++;

        }


    }
    if(r==c)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }

}
