#include<stdio.h>
#include<conio.h>
void nhap(int a[],int &n){
    printf("nhap vao n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void vtc(int a[],int &n,int x){
    n++;
    a[n-1]=x;
}
void vtd(int a[],int &n,int x){
    n++;
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=x;
}
void vtk(int a[],int &n,int k,int x){
    n++;
    for(int i=n-1;i>k;i--){
        a[i]=a[i-1];
    }
    a[k]=x;
}
int main(){
    int a[10];
    int n;
    int k;
    char gt;
    do{
    printf("MENU\n");
    printf("1.Nhap Mang\n");
    printf("2.Xuat Mang\n");
    printf("3.Nhap vao vi tri cuoi\n");
    printf("4.Nhap vao vi tri dau\n");
    printf("5.Nhap vao vi tri k\n");
    printf("x.Thoat!\n");
    printf("Vui long nhap vao lua chon cua ban!:\n");
    scanf("%c",&gt);
    getchar();
    if(gt=='1'){
        nhap(a,n);
    }
    else if(gt=='2'){
        xuat(a,n);
    }
    else if(gt=='3' || gt=='4' || gt =='5'){
        int x;
        printf("nhap vao x!\n");
        scanf("%d",&x);
        int k;
        printf("nhap vao k!\n");
        scanf("%d",&k);
        if(gt=='3'){
            vtc(a,n,x);
        }
        if(gt=='4'){
            vtd(a,n,x);
        }
        if(gt=='5'){
            vtk(a,n,k,x);
        }
    }
    }while(gt!='x');
    return 0;
}