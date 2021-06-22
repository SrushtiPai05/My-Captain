#include <stdio.h>
main(){
	printf("Pick a number: \n1. \n2. \n3. \n4. \n5. \n");
	int number=0;
	scanf("%d", &number);
	switch(number){
		case 1:
			printf("Food item-Pizza\nPrice-Rs 239");
			break;
		case 2:
			printf("Food item-Burger\nPrice-Rs 129");
			break;
		case 3:
		    printf("Food item-Pasta\nPrice-Rs 179");
			break;
		case 4:
			printf("Food item-French fries\nPrice-Rs 99");
			break;
		case 5:
			printf("Food item-Sandwitch\nPrice-Rs 149");
	    
	}
}
