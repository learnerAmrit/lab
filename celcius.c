#include<stdio.h>
float main(){
    float celcius, fafren;
    printf("enter temperature in celcius:\t");
    scanf("%f",&celcius);
    fafren=((9*celcius/5)+32);
    printf("%.2f in farenheit:\t%.4f\n",celcius,fafren);
    return 0;

}