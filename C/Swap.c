
#include <stdio.h>
int main() 
{ 
	int x, y; 
	printf("Enter Value of x "); 
	scanf("%d", &x); 
	printf("\nEnter Value of y "); 
	scanf("%d", &y); 
	//swap without using third variable.
	//Use only mathematical operations.
	// using * and /
	x=x*y;    
        y=x/y;   
        x=x/y;   
       system("cls");  
	printf("\nAfter Swapping: x = %d, y = %d", x, y); 
	return 0; 
} 
