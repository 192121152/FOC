#include<stdio.h>
int main(){
	int num,oldnum,rem,res=0;
	printf("enter number: ");
	scanf("%d",&num);
	oldnum=num;
	while(oldnum!=0){
		rem=oldnum%10;
		res+=rem*rem*rem;
		oldnum=oldnum/10;

	}
	if(res==num){
		printf("is armstrong number");
	}
	else{
		printf("not armstrong number");
	}
	return 0;
}
