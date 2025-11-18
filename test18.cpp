#include<stdio.h>
int Division(int n, int op)
{
    int temp=n,sum=0;
    switch(op){
        case 1:{
        if(n<10){
        }
        else{
            do{
                sum=sum+temp%10;
                temp=temp/10;
            }while(temp>0);
        }
        printf("Sum of digits = %d",sum);}
        break;
        case 2:{
        int right_digit=(n>0)?(n%10):(-(n%10));
        printf("Right N = %d",right_digit);}
        break;
        case 3:{
        if(n%2==0){
            printf("Yes\n");
        }
        else{
            printf("No");
        }}
        break;
        case 4:{
        if(n%3==0){
            printf("Yes\n");
        }
        else{
            printf("No");
        }}
        break;
        case 5:{
        if(n%5==0){
            printf("Yes\n");
        }
        else{
            printf("No");
        }}
        break;
        case 6:{
        if(n%6==0){
            printf("Yes\n");
        }
        else{
            printf("No");
        }}
        break;
        case 7:{
        if(n%9==0){
            printf("Yes\n");
        }
        else{
            printf("No");
        }}
        break;
        case 8:{
        {
            printf("Div\tYes/No\n");
            
            // Tái sử dụng các logic kiểm tra
            printf("2\t%s\n", (n % 2 == 0) ? "Yes" : "No");
            printf("3\t%s\n", (n % 3 == 0) ? "Yes" : "No");
            printf("5\t%s\n", (n % 5 == 0) ? "Yes" : "No");
            printf("6\t%s\n", (n % 6 == 0) ? "Yes" : "No");
            printf("9\t%s\n", (n % 9 == 0) ? "Yes" : "No");
        }}
        break;
        }
        return 0;
    }
int main(){
    int n=15,op=8;
    Division(n,op);
    return 0;
}