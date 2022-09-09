#include<stdio.h>    
#include<stdlib.h> 
#include <math.h>


double cube1(double num1){
	double result ;
	result = num1*num1*num1;
	return result;
		
}
double square1(double num1){
	double result ;
	result = num1*num1;
	return result;
		
}
double fact(double num1){
	double b = 1;
	for(int i =0; i<num1 ; i++){
		b*=(num1-i);	
	}
	return b;
}

int main(){
	
	double num1;
	double num2;
	char op;
	up:
	printf("\n This is a calculator of two numbers \n \n INSTRUCTIONS :  \n");
	printf("\n\ntype '+' for sum    *    type '-' for deference   *   type '*' for multiply    *   type '/' for division ");
	printf("\n\ntype c for cos of one number   *   type s for sin of one number   *    or type t for tan of one number");
	printf("\n\ntype a for 1/cos of one number    *   type b for 1/sin of one number   *   or type d for 1/tan of one number\n");
	printf("\ntype 'e' for square of a number     *    type 'f' for cube of a number    *    type ! for factorisation of a number\n");
	
	printf("\n enter the operation : ");
	scanf("%c" , &op );
	
	if (op== '+' || op== '-'||op== '*'||op== '/'){
		
		printf("enter the first number :");
		scanf("%lf" , &num1);
		printf("enter the second number :");
		scanf("%lf" , &num2);
		
	}else{
		printf("enter the number :");
		scanf("%lf" , &num1); 
	}
	
	
	if (op =='+'){
		printf("\nthe sum of %.2f and %.2f is : %.2f\n  " , num1 ,num2 , num1 + num2);
	}else if(op =='-'){
		printf("\nthe deference between %.2f and %.2f is : %.2f\n " , num1 ,num2 , num1 - num2);
	}else if(op =='*'){
		printf("\nthe multiplication of %.2f and %.2f is : %.2f\n  " , num1 ,num2 , num1 * num2);
	}else if(op =='/'){
		printf("\nthe division of %.2f on %.2f is : %.2f\n " , num1 ,num2 , num1 / num2);	
	}else if(op =='c'){
		printf("\nthe cos of %.2f is : %.2f \n " , num1  , cos(num1));
	}else if(op =='s'){
		printf("\nthe sin of %.2f is : %.2f  \n" , num1  , sin(num1));
	}else if(op =='t'){
		printf("\nthe tan of %.2f is : %.2f  \n" , num1  , tan(num1));
	}else if(op =='a'){
		printf("\nthe 1/cos of %.2f is : %.2f \n " , num1  , 1/cos(num1));
	}else if(op =='b'){
		printf("\nthe 1/sin of %.2f is : %.2f  \n" , num1  , 1/sin(num1));
	}else if(op =='d'){
		printf("\nthe 1/tan of %.2f is : %.2f  \n" , num1  , 1/tan(num1));
	}else if(op =='f'){
		printf("\n the cube of %.2f is : %.2f\n", num1 , cube1(num1));
	}else if(op =='e'){
		printf("\n the sauare of %.2f is : %.2f\n", num1 , square1(num1));
	}else if(op =='!'){
		printf("\n the ! of %.2f is : %.2f\n", num1 , fact(num1));
	}else {
		printf("please enter one of the operations mentioned above\n");
	}
	
	printf("\n************************************\n**********   THANK YOU  ************ \n************************************\n\n\n\n\n");
	goto up;	
 return 0;
}