#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap so luong chuoi nhap vao:");
	scanf("%d",&n);
	char arrs[n][50];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d:",i);
		scanf("%s",arrs[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arrs[j],arrs[j+1])>0){
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
	printf("Sau khi sap xep xong thu tu chuoi la:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	}
}
