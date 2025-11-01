#include<stdio.h>
int main()
{
    float n,sum=0;
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%f",sum);
    return 0;
}