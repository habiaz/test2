#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int firstappear(int a[],int n,int x){
    int i;
    for(int i=0;i<n;i++){
        if(x==a[i]){
            return i;
        }
    }
    return -i;
}
int lastappear(int a[],int n,int x){
    int j;
    for(int j=n-1;j>=0;j--){
        if(x==a[j]){
            return j;
        }
    }
    return -j;
}
void appear(int a[],int n,int x){
    int pos1=firstappear(a,n,x);
    int pos2=lastappear(a,n,x);
    if(pos1>0){
        printf("First appear is %d, Last appear is %d",pos1,pos2);
    }
    else{
        printf("Does not exist!");
    }
}
int main(){
    int a[10];
    int n=0;
    int x=0;
    printf("nhap vao n:");
    scanf("%d",&n);
    printf("nhap vao so ban muon tim:");
    scanf("%d",&x);
    nhap(a,n);
    appear(a,n,x);
    return 0;
}