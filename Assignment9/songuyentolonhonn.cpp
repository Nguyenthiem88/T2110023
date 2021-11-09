#include <stdio.h>
#include "function.h"
int main(){
	int n;
	printf("nhap gia tri n=");
	scanf("%d",&n);
	while(n<=0){
		printf(" xin vui long nhap lai so nguyen duong\n");	
		printf("nhap gia tri n=");
		scanf("%d",&n);
	}
	printf(" so nguyen to gan nhat lon hon %d la:%d",n,SNTlonhonn(n));
}
