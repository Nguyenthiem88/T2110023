#include <stdio.h>
int main(){// trung binh cong cac so le trong mang
	int n;
	printf(" nhap so n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("trung binh cong so le la S1=");
	int count=0;
	int S=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			count++;
			S+=arr[i];
		}
	}
	float S1=(float)S/count;
	printf("%f",S1);
}
