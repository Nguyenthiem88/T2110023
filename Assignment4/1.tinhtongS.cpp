#include <stdio.h>
int main(){
	int n;
	printf("nhap so n =  ");
	scanf("%d",&n);
	int i=0;
	float S=0;
	if(n>0){
		while(i<n){
		i++;
		S=S+(float)1/i;
	}
	printf("Tong can tim la S =  %f",S);
	}else printf("nhap lai du lieu");
}
