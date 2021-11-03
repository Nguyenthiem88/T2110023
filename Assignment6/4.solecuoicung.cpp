#include <stdio.h>
int main(){//so le cuoi cung cua mang
	int n,x;
	printf(" nhap so n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	int count=0;
	for(int i=n;0<=i;i--){
		if(arr[i]%2!=0){
			int sole=arr[i];
			printf("so le cuoi cung trong mang la %d",sole);
			count++;
			break;
		}
	}
	if(count==0)
	printf("mang khong co so le");
}
