#include <stdio.h>
int main(){
	int n,x;
	printf("nhap so n =");
	scanf("%d",&n);
	int S=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			x=n/i;
			S+=x;
		}
	}
	printf("tong uoc cua %d la S = %d",n,S);
}
