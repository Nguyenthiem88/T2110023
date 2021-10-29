#include <stdio.h>
int main(){
	int i=0;
	int n;
	int S=0;
	while(i<100){
		n=2*i+1;
		S+=n;
		i++;
	}
	printf("Tong 100 so le dau tien la: %d",S);
}
