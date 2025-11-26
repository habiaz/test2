#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void doipt(int a[],int n,int x,int k){
    for(int i=n;i>k;i--){//khi i=n với i>k thì nó nằm ở bên phải ,i-- đến khi nào nó gặp k thì dừng
        a[i]=a[i-1];//gán giá trị bên phải với giá trị bên trái.
    }
    a[k]=x;
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[10];
    int n;
    int x;
    int k;
    printf("nhap vao n:");
    scanf("%d",&n);
    printf("\nnhap vao pt x:");
    scanf("%d",&x);
    printf("\nnhap vao vi tri muon chen:");
    scanf("%d",&k);
    nhap(a,n);
    doipt(a,n,x,k);
    n++;
    xuat(a,n);
    return 0;
}