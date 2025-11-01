#include<stdio.h>
int main()
{
    int n,sotienbandau;
    printf("nhap vao so du cua ban:");
    scanf("%d",&sotienbandau);
    do{
        printf("1. Gui tien\n");
        printf("2. Rut tien\n");
        printf("3. Xem so du\n");
        printf("4. Thoat");
    }while(sotienbandau>0);
    return 0;

}