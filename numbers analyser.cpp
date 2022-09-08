#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{ 
    int num[2] = {1 , 5};
    int a, b;
    
    scanf("%d\n%d", &a, &b);
    
    
    num[0] = a;
    num[1] = b;

    
     
     for(int j = 0 ; j<2 ; j++){   
  	  switch (num[j]) {
      case 0 :
        printf("zero\n");
      break;
      case 1 :
        printf("one\n");
      break;
      case 2 :
        printf("two\n");
      break;
      
      case 3 :
        printf("tree\n");
      break;
      case 4 :
        printf("four\n");
      break;
      case 5:
        printf("five\n");
      break;
      case 6 :
        printf("six\n");
      break;
      case 7 :
        printf("seven\n");
      break;
      case 8 :
      printf("eight\n");
      break;
      case 9 :
        printf("nine\n");
      break;
      
      default:
        printf("please enter a number between 0 and 9\n");
        break;
      }
     }
      
    for(int i = 0 ; i<2 ; i++){        
        if (num[i] % 2 == 0){ 
            printf("\neven");
        }else{ 	
        	printf("\nodd");
		}
     
    }
    
    return 0;
}

