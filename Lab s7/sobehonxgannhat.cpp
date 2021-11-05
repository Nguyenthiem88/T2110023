#include <stdio.h>
int main(){
	int n,x;
	printf(" nhap so n=");
	scanf("%d",&n);
	printf(" nhap so x=");
	scanf("%d",&x);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap du lieu mang %d:",i);
		scanf("%d",&arr[i]);
	}
	int h,count=0;
	for(int i=0;i<n;i++){
		if(x>arr[i]){
			h=arr[i];
			count=1;
			break;
		}
	}
	if(count==0){
		printf("mang khong co so nho hon %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(x>arr[i]&&arr[i]>h){
				h=arr[i];
			}else{
				continue;	
			}	
		}
		printf("so nho hon %d gan nhat la:%d",x,h);
	}
}
