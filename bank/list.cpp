#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{ 
	
		
	char a[200],b[200],id[200],pass[200],balance[200];
	int result,result1,choice,blnce,money,ch;
	
	up:
	
	FILE * list = fopen("list.txt","r");
	
			fgets(a,200,list);
			fgets(b,200,list);
			fgets(balance,200,list);	

			
	fclose(list);
				
		blnce = atoi(balance);
		
		printf("enter your idenfier:\n");
		
		fgets(id,200,stdin);

		result = strcmp(a, id);

		
	   if(result == 0){
	   		printf("correct\n");
	   		printf("enter your password:\n");		
			fgets(pass,200,stdin);
			result1 = strcmp(b, pass);
		   	if(result1 == 0){
		   		printf("password correct\n");
		   		printf("your balance is : %s\n\n",balance);
		   		
		   		printf("if you want to withdraw type 1\n");
		   		scanf("%d",&ch);
		   		
	   			if(ch == 1){
	   				
			   		printf("chose how much do you want\n");
			   		printf("      ************************************************************************************************************");	
					printf("       ***********************************************************************************************************");
					printf("\n\ntype '1' for 100DH    *    type '2' for 200DH   *   type '3' for 300DH    *   type '4' for 400DH ");
					printf("\ntype '5' for 500DH   *    type '6' for 600DH    *    type '7' for 700DH ");
					printf("\ntype '8' for 800DH     *    type '9' for 900DH   *    type '10' for 1000DH   *   or enter any amont of money you want");
					printf("\n      ***********************************************************************************************************\n");
					scanf("%d",&money);
				
			
				switch (money){
						case 1 : 
					printf("take your money from below");	
					blnce = blnce - 100;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 2 : 
					printf("take your money from below");	
					blnce = blnce - 200;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 3 : 
					printf("take your money from below");	
					blnce = blnce - 300;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 4 : 
					printf("take your money from below");	
					blnce = blnce - 400;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 5 : 
					printf("take your money from below");	
					blnce = blnce - 500;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 6 : 
					printf("take your money from below");	
					blnce = blnce - 600;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 7 : 
					printf("take your money from below");	
					blnce = blnce - 700;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 8 : 
					printf("take your money from below");	
					blnce = blnce - 800;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 9 : 
					printf("take your money from below");	
					blnce = blnce - 900;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						case 10 : 
					printf("take your money from below");	
					blnce = blnce - 1000;
					printf(" your balance now is : %dDH\n",blnce);
					break;
						default : 
						printf("take your money from below");
						blnce = blnce - money;
						printf(" your balance now is : %dDH\n",blnce);
						break;	
				}
			}else{
				goto down;
			}		
	   	
			}else{
				printf("password incorrect\n");
			}
	   	
		}else{
			printf(" incorrect\n");
		}
		
	down:	

	printf("\n if you want to restart type '1' \n\n if you want to exit type anything else \n");
	scanf("%d",&choice);
	fgets(a,200,stdin);
	if (choice == 1){
		system("CLS");
		goto up;
	}else{
		system("CLS");
		printf("\n\n************************************************************************************************************************\n");
		printf("\n********************************************            THANK YOU             ******************************************\n");
		printf("\n************************************************************************************************************************\n");
	}   
			
	return 0;
}