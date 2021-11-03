#include <stdio.h>
int main(){// trung binh cong so le o vi tri chan
	int n;
	printf(" nhap so n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	int count=0;
	int S=0;
	for(int i=0;i<n;i++){
		if(i%2!=0){
			continue;
		}
		if(arr[i]%2!=0){
			count++;
			S+=arr[i];
		}
	}
	float S1=(float)S/count;
	printf(" so le o vi tri chan la %d\n",count);
	printf(" trung binh cong so le o vi tri chan la S1= %f",S1);
}
