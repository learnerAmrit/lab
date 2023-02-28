//Wap to declare an integer, create a pointer *p assign the address of integer to p and print all three value and increment x by 1 and print all again.
#include <stdio.h>
int main(){
  int x=5;
    int *p = &x;
    printf("the value of X: %d\n",x);
    printf("the value of *X: %d\n", *p);
    printf("the value of &X: %p\n", &x);
    x +=1;
    printf("the value of X: %d\n",x);
    printf("the value of *X: %d\n", *p);
    printf("the value of &X: %p\n", &x);
    return 0;
}
