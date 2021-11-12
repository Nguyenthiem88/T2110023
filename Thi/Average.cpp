#include <stdio.h>
#include "Exercise 2.h"
int main(){
	int n;
	printf("nhap gia tri n=");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d=",i);
		scanf("%d",&s[i]);
	}
	printf("gia tri trung binh cua mang la %f",average(s,n));
}
