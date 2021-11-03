#include <stdio.h>
int main(){
	int n,x;
	printf(" nhap so n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	printf(" nhap so x=");
	scanf("%d",&x);
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			printf("bien x co trong mang tren");
			count++;
			break;	
		}	
	}
	if(count==0) 
	printf("bien x khong co trong mang tren");
}
