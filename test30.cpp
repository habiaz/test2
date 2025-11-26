#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void tach(int a[],int n,int b[],int c[]){
    int nb=0;
    int nc=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           b[nb]=a[i];
           nb++;
        }
        else{
            c[nc]=a[i];
            nc++;
        }
    }
    for(int i=0;i<nb;i++){
        printf("%d",b[i]);
    }
    for(int i=0;i<nc;i++){
        printf("%d",c[i]);
    }
}
int main(){
    int a[10];
    int n;
    int b[10];
    int c[10];
    printf("nhap vao n:");
    scanf("%d",&n);
    nhap(a,n);
    tach(a,n,b,c);
    return 0;
}