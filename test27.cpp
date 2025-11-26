#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void daon(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){//Vd:chạy gắn 0 với 3, vòng lặp tiếp theo lại gán 1 với 2.nếu chạy n thì nó về lại như cũ!
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}
int main(){
    int a[10];
    int n;
    printf("nhap vao n:");
    scanf("%d",&n);
    nhap(a,n);
    daon(a,n);
    return 0;
}