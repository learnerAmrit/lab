#include<stdio.h>
int main(){
    int num=0, fact=1, i;
    printf("Enter a number to find factorial:\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact*=i;
    }
    printf("Factorial of %d:\t%d\n",num,fact);
    return 0;

}