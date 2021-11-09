#include <stdio.h>
#include <math.h>
// tim so nguyen to gan nhat lon hon n
int SNTlonhonn(int n){
	int i;
	for(i=n+1; ;i++){
		int count=0;
		for(int j=2;j<n;j++){
			if(i%j==0){
				count++;	
			}
		}
		if(count==0){
			break;
		}
	}
		return i;
}

//tinh tong cac chu so cua so nguyen n
int Tongcacson(int n){
	int b=0;
	while(n!=0){
		b+=abs(n%10);
		n=n/10;
	}
	return b;
}

//tinh chu vi tam giac
int Chuvitamgiac(int a, int b, int c){
		while ((a+b)<c||(b+c)<a||(c+a)<b){
		printf("ba so %d, %d, %d khong phai ba canh tam giac\n Xin moi nhap lai du lieu\n",a,b,c);
		printf("nhap canh tan giac a=");
		scanf("%d",&a);
		printf("nhap canh tan giac b=");
		scanf("%d",&b);
		printf("nhap canh tan giac c=");
		scanf("%d",&c);
	}
	int C=a+b+c;
	return C;
}

//tinh dien tich tam giac
int Dientichtamgiac(int a, int b, int c){
		while ((a+b)<c||(b+c)<a||(c+a)<b){
			printf("ba so %d, %d, %d khong phai ba canh tam giac\n Xin moi nhap lai du lieu\n",a,b,c);
			printf("nhap canh tan giac a=");
			scanf("%d",&a);
			printf("nhap canh tan giac b=");
			scanf("%d",&b);
			printf("nhap canh tan giac c=");
			scanf("%d",&c);
		}
	int C=a+b+c;
	float S=sqrt(C/2*(C/2-a)*(C/2-b)*(C/2-c));
	return S;
}

//tim uoc chung lon nhat cua 2 so
int UCLN(int a, int b){
	int i=0;
	for(i=a;i>1;i--){
		if(b%i==0 && a%i==0){
			break;
		}
	}
	return i;
}

// tim boi chung nho nhat
int BCNN(int a, int b){
	int x;
	for(int i=1; ; i++){
		x=a*i;
		if(x%b==0){
			break;
		}
	}
	return x;
}
