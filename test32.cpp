#include<stdio.h>
int thoaDieuKienSNT(int x,int n){
    for(int i=0;i<n;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(thoaDieuKienSNT(a[i],n)==1){
            printf("%d",a[i]);
        }
    }
    return 0;
}