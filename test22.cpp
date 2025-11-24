#include<stdio.h>
void nhap(int n,int a[]){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void tong(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("tong la %d",sum);

}
int main(){
    int n;
    int a[10];
    printf("nhap vao bao nhieu so muon tinh tong:");
    scanf("%d",&n);
    nhap(n,a);
    tong(a,n);
    return 0;
}