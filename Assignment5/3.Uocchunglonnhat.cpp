#include <stdio.h>
int main(){
	int a,b,i;
	printf("nhap so a=");
	scanf("%d",&a);
	printf("nhap so b=");
	scanf("%d",&b);
	for(i=a;1<i;i--){
		if(a%i==0 && b%i==0){
			break;
		}
	}
	printf("uoc chung lon nhat la %d",i);
}
