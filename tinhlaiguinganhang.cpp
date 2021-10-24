#include <stdio.h>
#include <math.h>
int main(){
	int t,n;
	float T;
	printf("Nhap so tien : ");
	scanf("%d",&t);
	printf("Nhap so nam : ");
	scanf("%d",&n);
	T=t*pow(1+0.08,n);
	printf("So tien thu duoc la: %f",T);
}
