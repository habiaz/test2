#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void chend(int a[],int n,int x){
    a[0]=x;
    for(int i=1;i<n;i++){
        a[i]=a[i+1];
    }
    n++;
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int a[10];
    int n;
    int x;
    printf("nhap vao n:");
    scanf("%d",&n);
    printf("nhap vao so muon chen:");
    scanf("%d",&x);
    nhap(a,n);
    chend(a,n,x);
    xuat(a,n);
    return 0;
}