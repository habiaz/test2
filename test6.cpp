#include<stdio.h>
int main()
{
    int n,sum=0,i=0,j=1,k=1;
    scanf("%d",&n);
    do{
        sum=i+j;
        i=j;
        j=sum;
        k++;
    }while(k<=n);
    printf("%d",sum);
    return 0;
}