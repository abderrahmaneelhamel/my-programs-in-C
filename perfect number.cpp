#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
    int num ,count;
    
    printf("enter a numbre:");
    scanf("%d",&num);  
    
	for (int i=1 ; i < num ;i++){
	
		if( num % i== 0){
		count += i;
		}
	}
	if (count == num){
		printf("this is a perfect numbre");
	}else {
		printf("this is not a perfect numbre");	
	}
	return 0;
}