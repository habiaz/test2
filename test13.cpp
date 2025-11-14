#include<stdio.h>
float BMI(int weight , float height){
    float bmi;
    bmi=weight/(height*height);
    return bmi;
}
void Obese(float bmi){
    if(bmi<18.5){
        printf("Underweight");
    }
    else if(bmi<22.9){
        printf("Normal weight");
    }
    else if(bmi<24.99){
        printf("Over weight");
    }
    else{
        printf("Obese");
    }
}
int main(){
    int weight = 45;
    float height = 1.55;
    float bmi = BMI(weight,height);
    Obese(bmi);
    return 0;
}