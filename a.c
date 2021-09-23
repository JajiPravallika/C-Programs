#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int X,i=0;
        scanf("%d",&X);
        for(i=0;i<=X;i++)
        {
            if(X=4*i+1)
            {
                printf("North\n");
                i++;
            }
            else if(X=4*i+2)
           {
                printf("East\n");
                i++;
           }
           else if(X=4*i+3)
           {
                printf("South\n");
                i++;
           }
           else if(X=4*i+4)
           {
               printf("West\n");
               i++;
           }
        }
    }
    return 0;
}