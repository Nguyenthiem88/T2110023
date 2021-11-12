#include <stdio.h>
#include <string.h>
int main(){
	char s1[50];
	printf("nhap s1:");
	scanf("%s",s1);
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]>=65 && s1[i]<=90){
			s1[i]+=32;
		}
	}
	int count1=0, count2=0;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='u'||s1[i]=='o'||s1[i]=='i')
			count1++;
			else count2++;
	}
	printf("nguyen am trong chuoi la %d\nky tu khac so luong la %d\n",count1,count2);
}
