#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("nhap canh thu hai: ");
	scanf("%d",&b);
	printf("nhap canh thu ba: ");
	scanf("%d",&c);
	while((a+b<c) || (b+c<a) || (a+c<b)||a<0||b<0||c<0){
		printf("Nhap lai du lieu\n");
		printf("nhap canh thu nhat: ");
		scanf("%d",&a);
		printf("nhap canh thu hai: ");
		scanf("%d",&b);
		printf("nhap canh thu ba: ");
		scanf("%d",&c);	
	}
	printf("Thoa man ba canh tam giac\n");
	int C=a+b+c;
	float S=sqrt(C/2*(C/2-a)*(C/2-b)*(C/2-c));
	printf("Chu vi tam giac la %d = %d\n",C,C);
	printf("Dien tich tam giac la %f = %f",S,S);
}
