#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void tangdan(int a[],int n){
    int temp=0;
    for(int i=0;i<n;i++){//sắp xếp lại vì 1 lần vòng lặp trong chạy xong thì sẽ có 1 số được đẩy ra ngoài cùng nên lặp lại như dị với n-1 lần để đưa tất cả đúng vị trí
        for(int j=0;j<n;j++){//sắp xếp với logic thay số lớn hơn ra sau
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
        }
    }
void sapxep(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[10];
    int n;
    printf("nhap vao n");
    scanf("%d",&n);
    nhap(a,n);
    tangdan(a,n);
    sapxep(a,n);
    return 0;
}