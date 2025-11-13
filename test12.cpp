#include<stdio.h>
void FindMaxN(int n){
    int s=0,sum=0;
    while(sum+(s+1)<n){
        s=s+1;
        sum=sum+s;
    }
    printf("%d ",s);
    printf("%d",sum);
    
}
int main()
{
    int n= 4;
    FindMaxN(n);
    return 0;
}