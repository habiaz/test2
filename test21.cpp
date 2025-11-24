#include<stdio.h>
void lonnhat(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void ptlonnhat(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
}
int main(){
    int a[10];
    int n;
    printf("nhap vao so luong so:");
    scanf("%d",&n);
    lonnhat(a,n);
    ptlonnhat(a,n);
    return 0;
}