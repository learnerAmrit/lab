#include <stdio.h>
int main(){
    int num=0,i;
    printf("Enter a number to find its factors\n");
    scanf("%d",&num);
    printf("The factor of %d are:\n",num);
    for(i=1;i<=num;i++){
        if (num%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}