#include<stdio.h>
int FindMaxN(int n){
    n=10;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=sum+i;
    }
    return sum;
}
void sosanh(int S){
    int n=10;
    if(FindMaxN(n)<=1){
        printf("Not found");
    }
    else{
        printf("%d",FindMaxN(n));
    }
}
int main(){
    int n=10;
    int S=15;
    sosanh(S);
    return 0;
}