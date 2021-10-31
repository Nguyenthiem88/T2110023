#include <stdio.h>
int main(){
	int n;
	printf("nhap so n=");
	scanf("%d",&n);
	printf("so nguyen to dung truoc %d la\n",n);
	for(int i=2;i<=n;i++){
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
