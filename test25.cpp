#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int Max(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
void vitri(int a[],int n){
    for(int i=0;i<n;i++){
        if(Max(a,n)==a[i]){
            printf("%d",i);
        }
    }
}
int main(){
    int a[10];
    int n;
    printf("nhap vao so so muon tim:");
    scanf("%d",&n);
    nhap(a,n);
    vitri(a,n);
    return 0;
}