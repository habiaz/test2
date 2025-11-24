#include<stdio.h>
void nhapmang(int n[],int x){
    for(int i=0;i<x;i++){
    scanf("%d",&n[i]);
}
}
void xuatmang(int n[],int x){
    for(int j=0;j<x;j++){
    printf("%d",n[j]);
}
}
int main(){
    int n[10];
    int x;
    printf("nhap vao so luong so muon in ra:");
    scanf("%d",&x);
    nhapmang(n,x);
    xuatmang(n,x);
    return 0;
}