#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],sum=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    getch();
}
