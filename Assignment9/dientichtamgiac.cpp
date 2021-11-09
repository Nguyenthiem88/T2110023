#include <stdio.h>
#include "function.h"
int main(){
	int a,b,c;
	printf("nhap canh tan giac a=");
	scanf("%d",&a);
	printf("nhap canh tan giac b=");
	scanf("%d",&b);
	printf("nhap canh tan giac c=");
	scanf("%d",&c);
	printf("dien tich tam giac la %d",Dientichtamgiac(a,b,c));
}
