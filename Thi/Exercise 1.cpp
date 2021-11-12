#include <stdio.h>
int main(){
	int n;
	printf("nhap gia tri n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d=",i);
		scanf("%d",&arr[i]);
	}
	int count = 0;
	int i;
	for(i=n-1;i>=0;i--){
		if(arr[i]%2==0){
			count++;
			break;
		}
	}
	if(count==1){
		printf(" Last Even: %d",arr[i]);
	}else{
		printf("No EVEN number");
	}
}
