#include<stdio.h>
int Perfect(int K){
    int sum=0;
     if(K<1){
        return 0;
    }
    for(int i=1;i<K;i++){
        if(K%i==0){
            sum=sum+i;
        }
    }
    if(sum==K){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
void AllPerfect(int n){
   int count=0;
   for(int k=1;k<=n;k++){
    if(Perfect(k)==1){
        if(count>0){
        printf(" ");
    }
    printf("%d",k);
    count++;
    }
    }
    if(count==0){
        printf("0");
}
printf("\n");
}
int main(){
    int n=5000;
    AllPerfect(n);
    return 0;

}