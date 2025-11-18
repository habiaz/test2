#include<stdio.h>
int IsPrime(int K){
    if(K<=1){
        return 0;
    }
    if(K<=2){
        return 1;
    }
    if(K%2==0){
        return 0;
    }
    for(int i=3;i*i<K;i+=2){
        if(K%i==0){
            return 0;
        }
    }
    return 1;
}
void ListPrime(int n){
    int count=0;
    for(int k=1;k<=n;k++){
        if(IsPrime(k)==1){
            if(count>0){
                printf(" ");
            }
            count++;
            printf("%d",k);
        }
    }
    if(count==0){
        printf("0");
    }
    printf("\n");
}
int main(){
    int n=17;
    ListPrime(n);
    return 0;
}