#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
             printf(" ");
        }
       printf("\n");
    }
}
