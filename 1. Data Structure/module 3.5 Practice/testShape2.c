#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s=n-1;
    int k=1;

    int s1=1;
    int k1=n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

printf("\n");
        s--;
        k=k+2;
        
    }
     for (int i = 0; i <=n-1; i++)
    {

        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*1");
        }

printf("\n");
        s++;
        k=k-2;

        
    }
    
    return 0;
}