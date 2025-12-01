#include<stdio.h>
#include<limits.h>
void nhap(int a[],int n);
void xuat(int a[],int n);
int timMinthuhai(int a[],int n);
int timMaxthuhai(int a[],int n);
int main(){
    int a[10];
    int n;
    printf("nhap vao n:");
    scanf("%d",&n);
    nhap(a,n);
    printf("%d",   timMinthuhai(a,n));
    return 0;
}
void nhap( int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int timMinthuhai(int a[],int n){
    int min=INT_MAX;
    int min_2=INT_MAX;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(min==a[i]){
            continue;
        }
        else{
            if(a[i]<min_2){
                min_2=a[i];
            }
        }
    }
    return min_2;
}
int timMaxthuhai(int a[],int n){
    return 0;
}