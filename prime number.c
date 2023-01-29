#include<stdio.h>
int main(){
	int i,n;
	printf("enter n: ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i!=0){
			printf("prime");
			break;
		}
	}
	return 0;
}
