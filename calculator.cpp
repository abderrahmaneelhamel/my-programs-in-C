#include<stdio.h>    
#include<stdlib.h> 

int main(){
	
	double num1;
	double num2;
	char op;
	
	printf(" This is a calculator of two numbers \n");
	printf("\ntype '+' for sum \ntype '-' for deference \ntype '*' for multiply \nor type '/' for division \n");
	scanf("%c" , &op );
	printf("enter the first number :");
	scanf("%lf" , &num1);
	printf("enter the second number :");
	scanf("%lf" , &num2);
	
	
	if (op =='+'){
		printf("\nthe sum of %.2f and %.2f is : %.2f:  " , num1 ,num2 , num1 + num2);
	}else if(op =='-'){
		printf("\nthe deference between %.2f and %.2f is : %.2f:  " , num1 ,num2 , num1 - num2);
	}else if(op =='*'){
		printf("\nthe multiplication of %.2f and %.2f is : %.2f:  " , num1 ,num2 , num1 * num2);
	}else if(op =='/'){
		printf("\nthe division of %.2f on %.2f is : %.2f:  " , num1 ,num2 , num1 / num2);
	}else {
		printf("please enter one of the operations mentioned above");
	}
	
	printf("\n\n              thank you");
	
	
	
	
	
 return 0;
}