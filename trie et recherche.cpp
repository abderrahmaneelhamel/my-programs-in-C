#include <stdio.h>
#include <stdlib.h>

int main() {

	int a,i,j,n,num,r,s;

	printf("enter how many numbers you want to work with:\n");
	scanf("%d",&n);
	int T[n];
	if(n>0){

	for(i=0; i<n ; i++){
		printf("\nenter a number : ",i+1);
		scanf("%d",&T[i]);
	}		
	for(i=0; i<n ; i++){
		j = i;
		while(T[j]<T[j-1] && j>=0){
			a = T[j-1];
			T[j-1] = T[j];
			T[j] = a;
			j--;
		}
	}	
	printf("\nenter the number you want to know its rank: ");
	scanf("%d",&num);
	for(i=0; i<n ; i++){
		
		if(num == T[i]){					
			r= i+1;				
		} 
	}
	if(num = T[r-1]){
		printf("\nthe rank of %d is %d",num,r);
	}else{		
		printf("\nplease enter a number from what you entered before");
	}		
	}else{
		printf("\nplease enter a number bigger than 0");
	}	
	
	return 0;		
}