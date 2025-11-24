#include<stdio.h>
void nhap(int n,int a[]){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void sochan(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            dem++;
        }
    }
    printf("co %d so la so chan",dem);
}
int main(){
    int n;
    int a[10];
    printf("nhap vao bao nhieu so muon muon kiem tra la so chan:");
    scanf("%d",&n);
    nhap(n,a);
    sochan(a,n);
    return 0;
}