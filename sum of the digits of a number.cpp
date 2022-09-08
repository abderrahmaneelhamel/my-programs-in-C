#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int modulo(int n){
   return n = n % 10 ; 
}

int main() {
	
    int n;
    int s = 0;
    scanf("%d", &n);
    for(int i = 0; i<10 ; i++){
        s = s + modulo(n);
        n = n / 10;          
    }
    printf("%d", s );
    return 0;
}
