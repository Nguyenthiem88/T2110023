#include <stdio.h>
int main(){
	int n,a1,a2;
	int a;
	printf("nhap so n =");
	scanf("%d",&n);
	int i=3;
	a1=1;
	a2=1;
	if(n==2||n==3){
		printf("so Fibonacci thu %d la 1",n);
	}else{
		while(i<n){
		a=a1+a2;
		a1=a2;
		a2=a;
		i++;
		}
		printf("so Fibonacci thu %d la %d",n,a);
	}
	
}
