#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("so nho nhat la %d",min);
}
int main(){
    int a[10];
    int n;
    printf("nhap vao bao nhieu so de kiem tra nho nhat");
    scanf("%d",&n);
    nhap(a,n);
    min(a,n);
    return 0;
}