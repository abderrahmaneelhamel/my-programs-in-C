#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{	
	char b[200];
	int num,d;
	

	
	printf("enter identifier\n");	
	fgets(b,200,stdin);	
	scanf("%s",b);
	
	FILE * list1 = fopen("list.txt","w");
				
		fprintf(list1 , b);
				
		
	fclose(list1);

	return 0;	
}