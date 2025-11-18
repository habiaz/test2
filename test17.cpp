#include<stdio.h>
int tim_max(int x,int y,int z){
    int max;
    max=x;
    if(y>max){
        max=y;
    }
    if(z>max){
        max=z;
    }
    return max;
}
int main(){
    int x=10,y=2,z=5;
    int toida=tim_max(x,y,z);
    printf("%d",toida);
    return 0;
}