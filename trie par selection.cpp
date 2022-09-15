#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,i,j,n;

	
	printf("enter how many numbers you want to work with:\n");
	scanf("%d",&n);
	int T[n];
	
	if(n>0){

		for(i=0; i<n ; i++){
			printf("enter a number : ",i+1);
			scanf("%d",&T[i]);
		}
		
		for(i = 0 ; i < n ;i++){
			
			for(j = 0 ; j < n-1 ;j++){
				
				if(T[j] > T[j+1]){
					a = T[j];
					T[j] = T[j+1];
					T[j+1] = a; 
				}
			}
		
		}
		
		for(i=0; i<n ; i++){
			printf("T[%d] : %d \n",i+1,T[i]);
		}
	}
	return 0;
}