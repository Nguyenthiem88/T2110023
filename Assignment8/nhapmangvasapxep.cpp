#include <stdio.h>
int main(){
	int n;
	printf("nhap gia tri n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri mang vi tri %d = ",i);
		scanf("%d",&arr[i]);
		int j=i-1;
		int m=arr[i];
		for( ; j>=0 && m < arr[j]; j--){
			arr[j+1]=arr[j];
			arr[j]=m;
		}
		arr[j+1]=m;
	}
	printf("mang sau khi nhap xong la\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
