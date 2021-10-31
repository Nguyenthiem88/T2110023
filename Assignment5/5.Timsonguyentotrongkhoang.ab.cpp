#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so a=");
	scanf("%d",&a);
	printf("nhap so b=");
	scanf("%d",&b);
	while(a>b){
		printf("xin moi nhap lai du lieu\n");
		printf("nhap so a=");
		scanf("%d",&a);
		printf("nhap so b=");
		scanf("%d",&b);
	}
		printf("so nguyen trong khoang tu %d den %d la\n",a,b);
		for(int i=a;i<=b;i++){
			int x=0;
			for(int j=2;j<i;j++){
				if(i%j==0){
					x++;
				}
			}
			if(x==0){
				printf("%d\n",i);
			}
		}
		
}
