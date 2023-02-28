#include<stdio.h>
int main(){
  
	int num, i, prev = 0, curr = 1, next;
	printf("Enter the number of Fibonacci numbers to generate: ");
	scanf("%d", &num);
	printf("Fibonacci sequence: %d %d ", prev, curr);
	for (i = 2; i < num; i++) {
    	next = prev + curr;
    	printf("%d\t", next);
    	prev = curr;
    	curr = next;
	}

    return 0;

}