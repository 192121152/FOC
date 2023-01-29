#include<stdio.h>
int main(){
	int n,n1,rem,rev=0;
	printf("enter number: ");
	scanf("%d",&n);
	while(n>0){

	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
if(n1==rev){
	printf("is a palindrome number....");
	}
	else{
		printf("is not a palindrome number...");
	}
	return 0;
}
