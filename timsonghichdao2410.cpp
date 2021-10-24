#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so : ");
	scanf("%d",&a);
	b=0;
	b=b*10+a%10;
	a=a/10;
	if(a!=0){
		b=b*10+a%10;
		a=a/10;
		if(a!=0){
			b=b*10+a%10;
			a=a/10;
			if(a!=0){
				b=b*10+a%10;
				a=a/10;
				if(a!=0){
					b=b*10+a%10;
					a=a/10;
				}else{
					printf("So nghich dao la: %d",b);
				}
			}else{
				printf("So nghich dao la: %d",b);
			}
		}else{
			printf("So nghich dao la: %d",b);
		}
	}else{
		printf("So nghich dao la: %d",b);
	}
}
