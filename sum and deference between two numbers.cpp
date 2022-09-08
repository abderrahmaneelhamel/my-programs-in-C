#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {
    (*a) = *a + *b ;
    (*b) = abs(*a - *b - *b) ; 
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
