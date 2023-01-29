#include<stdio.h>
int main(){
	int i;
	printf("enter even number:");
	scanf("%d",&i);
	for(i=1; i<=50; i++){
		if(i%2==0){
			printf("%d\t", i);
		}
	}
	return 0;
}
