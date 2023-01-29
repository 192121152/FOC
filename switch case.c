#include<stdio.h>
int main(){
	int num=0;
	printf("enter number: ");
	scanf("%d",&num);
	switch(num){
		case 10:
			printf("number is equal to 10 ");
			break;
			case 20:
				printf("number is equal to 20");

				break;
				case 40:
					printf("number is equal to 40");
					break;
					default:
						printf("number is not equal to 10,20,40");

			}
			return 0;
	}
