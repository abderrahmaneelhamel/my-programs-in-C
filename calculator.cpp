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
double rad(double num1){
	double rad;
	rad = num1*3.14/180;
	return rad;
}

int main(){
	
	double num1;
	double num2;
	int op;
	int choice=0;
	
	r:
	
	printf("      ************************************************************************************************************");	
	printf("\n \n                                       *     CALCULATOR INSTRUCTIONS       *\n\n");
	printf("                    *******************************************************************************");
	printf("\n\ntype '1' for sum    *    type '2' for deference   *   type '3' for multiply    *   type '4' for division ");
	printf("\ntype '5' for square of a number    *    type '6' for cube of a number    *    type '7' for factorisation of a number ");
	printf("\ntype '8' for cos of one number     *    type '9' for sin of one number   *    type '10' for tan of one number");
	printf("\ntype '11' for 1/cos of one number  *  type '12' for 1/sin of one number  *   or type '13' for 1/tan of one number\n");
	printf("\n      ************************************************************************************************************\n");
	
	printf("\n enter the operation you want : ");
	scanf("%d" , &op );
	
	if (op <= 4 && op >0){
		
		printf("enter the first number :");
		scanf("%lf" , &num1);
		printf("enter the second number :");
		scanf("%lf" , &num2);		
	}else if( op > 4 && op < 14){
		printf("enter the number :");
		scanf("%lf" , &num1); 
	}else{
		printf("\n please enter one of the operations mentioned above\n");
	}
	
	
	switch(op){
		case 1: printf("\nthe sum of %.2f and %.2f is : %.2f\n  " , num1 ,num2 , num1 + num2);  break;
		case 2: printf("\nthe deference between %.2f and %.2f is : %.2f\n " , num1 ,num2 , num1 - num2); break;
		case 3: printf("\nthe multiplication of %.2f and %.2f is : %.2f\n  " , num1 ,num2 , num1 * num2); break;
		case 4:
			if(num2 != 0){
				printf("\nthe division of %.2f on %.2f is : %.2f\n " , num1 ,num2 , num1 / num2);	
			}else{
				printf("\n you can't divide on zero\n ");
			} break;
		case 5: printf("\n the sauare of %.2f is : %.2f\n", num1 , square1(num1)); break;
		case 6: printf("\n the cube of %.2f is : %.2f\n", num1 , cube1(num1)); break;
		case 7: printf("\n the ! of %.2f is : %.2f\n", num1 , fact(num1)); break;
		case 8: printf("\nthe cos of %.2f is : %.2f \n " , num1  , cos(rad(num1))); break;
		case 9: printf("\nthe sin of %.2f is : %.2f  \n" , num1  , sin(rad(num1))); break;
		case 10: printf("\nthe tan of %.2f is : %.2f  \n" , num1  , tan(rad(num1))); break;
		case 11: printf("\nthe 1/cos of %.2f is : %.2f \n " , num1  , 1/cos(rad(num1))); break;
		case 12: printf("\nthe 1/sin of %.2f is : %.2f  \n" , num1  , 1/sin(rad(num1))); break;
		case 13: printf("\nthe 1/tan of %.2f is : %.2f  \n" , num1  , 1/tan(rad(num1))); break;
		default:  break;
	}
	printf("\n\n      ***********************************************************************************************************\n");
	printf("\n if you want to restart type '1' \n\n if you want to exit type anything else \n");
	scanf("%d",&choice);
	if (choice == 1){
		system("CLS");
		goto r;
	}else{
		system("CLS");
		printf("\n\n************************************************************************************************************************\n");
		printf("\n********************************************            THANK YOU             ******************************************\n");
		printf("\n************************************************************************************************************************\n");
	}
	

		
 return 0;
}