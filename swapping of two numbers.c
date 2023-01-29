#include<stdio.h>
int main(){
	int num1,num2,y;
	printf("enter the num1: ");
	scanf("%d",&num1);
	printf("enter the num2: ");
	scanf("%d",&num2);
	y=num1;
	num1=num2;
	num2=y;
	printf("after swapping of two numbers\n");
	printf("num1 value is:%d\n",num1);
	printf("num2 value  is : %d\n",num2);
	return 0;
}
