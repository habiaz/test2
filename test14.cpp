#include<stdio.h>
int IsPrime(int n){
    for(int i=2;i<=n;i++){
            if(n<=2){
        printf("%d is prime!",n);
        }
        else if(n%i==0){
            printf("%d is not prime",n);
            return 0;
        }
        else{
            printf("%d is prime",n);
            return 1;
        }
    }
}
int main(){
    int n= 4;
    IsPrime(n);
    return 0;
}