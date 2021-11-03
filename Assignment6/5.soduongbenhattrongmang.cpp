#include <stdio.h>
int main(){// so duong be nhat
	int n;
	printf(" nhap so n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	int x=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x=arr[i];
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<x&&arr[i]>0){
			x=arr[i];
		}
	}
	printf("so duong be nhat la %d",x);
}
