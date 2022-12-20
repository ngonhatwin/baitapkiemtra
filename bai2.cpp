#include "stdio.h"
int main () {
	int a, b;
	int n;
	printf("\n hay nhap so a = ");
	scanf("%d", &a);
	printf("\n hay nhap so b = ");
	scanf("%d", &b);
	
	for ( n = a; n<=b; n++){
		if ( n>=1 && n<=9){
			switch (n) {
			case 1: 
				printf("one\n");
				break;
			case 2: 
				printf("two\n");
				break;
			case 3: 
				printf("three\n");
				break;
			case 4: 
				printf("four\n");
				break;
			case 5: 
				printf("five\n");
				break;
			case 6: 
				printf("six\n");
				break;
			case 7: 
				printf("seven\n");
				break;
			case 8: 
				printf("eight\n");
				break;
			case 9: 
				printf("nine");
				break;
			} 
			} else if ( n % 2 == 0 && n > 9 ) {
					printf ("\neven ");
					} else if ( n % 2 != 0 && n > 9 ) {
						printf ("\nodd");
					}
		
		
		
		
	}
	
	
	
}
 
