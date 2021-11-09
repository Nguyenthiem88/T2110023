#include <stdio.h>
#include "function.h"
int main(){
	int a,b;
	printf("nhap so nguyen a=");
	scanf("%d",&a);
	printf("nhap so nguyen b=");
	scanf("%d",&b);
	while (a<=0 || b<=0){
		printf("xin vui long nhap lai so duong\n");
		printf("nhap so nguyen a=");
		scanf("%d",&a);	
		printf("nhap so nguyen b=");
		scanf("%d",&b);	
	}
	printf("boi chung nho nhat cua %d va %d la: %d",a,b,BCNN(a,b));
}
