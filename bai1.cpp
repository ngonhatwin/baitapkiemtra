#include "stdio.h"

int main () {


int n;
	LOOP: printf("\n hay nhap so nguyen duong n ");
	scanf ("%d", &n);
	//khinguoidungnhapn<1
	while ( n < 1)
		{
		printf("\n n phai lon hon hoac bang 1\n");
		
		
		goto LOOP;
		} 
	
	//khinthuoctu1den9
		if ( n>=1 && n<=9) {
		
		switch (n) {
			case 1: 
				printf("one");
				break;
			case 2: 
				printf("two");
				break;
			case 3: 
				printf("three");
				break;
			case 4: 
				printf("four");
				break;
			case 5: 
				printf("five");
				break;
			case 6: 
				printf("six");
				break;
			case 7: 
				printf("seven");
				break;
			case 8: 
				printf("eight");
				break;
			case 9: 
				printf("nine");
				break;
			
	
	
		
	}
	//nguoclai
	} else {
		printf("\n Greater than 9");
	}
			
				
	
}
