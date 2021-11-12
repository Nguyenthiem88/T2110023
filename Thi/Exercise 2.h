#include <stdio.h>
float average(int s[],int n){
	int S=0;
	for(int i=0;i<n;i++){
		S+=s[i];
	}
	float avg=(float)S/n;
	return avg;
}
