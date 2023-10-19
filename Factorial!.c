/*You have been given a positive integer N. You need to find and print the Factorial of this number. 
The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. 
You can read more about the factorial of a number here.*/

// Explanation:
/*I had already solved it in my Post Lab 1. I realized that in order for the
test cases to be passed, I won't have to write "Enter any number, Your factorial is" etc things.
I simply scanned the number, applied for loop and printed it factorial.*/

// Solution:

#include <stdio.h>

int main(){
	int i,num,fact=1;
	scanf("%d", &num);  
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("%d", fact);
	return 0;  
}
