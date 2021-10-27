#include <stdio.h>
int main(){
	int a,b,x;
	printf("nhap ngay: ");
	scanf("%d",&a);
	printf("nhap thang: ");
	scanf("%d",&b);
	if( 1<=a && a<=31 && b==1 or 1<=a && a<=28 && b==2 or 1<=a && a<=31 && b==3
	or 1<=a && a<=30 && b==4 or 1<=a && a<=31 && b==5 or 1<=a && a<=30 && b==6 
	or 1<=a && a<=31 && b==7 or 1<=a && a<=31 && b==8 or 1<=a && a<=30 && b==9
	or 1<=a && a<=31 && b==10 or 1<=a && a<=30 && b==11 or 1<=a && a<=31 && b==12){
		if(b==1){
		x=a;
		printf("ngay thu %d trong nam\n",x);
		}else if(b==2){
		x=31+a;
		printf("ngay thu %d trong nam\n",x);
		}else if(b==3){
		x=31+28+a;
		printf("ngay thu %d trong nam\n",x);
		}else if(b==4){
		x=31+28+31+a;
		printf("ngay thu %d trong nam\n",x);
		}else if(b==5){
		x=31+28+31+30+a;
		printf("ngay thu %d trong nam\n",x);
		}else if(b==6){
		x=31+28+31+30+31+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==7){
		x=31+28+31+30+31+30+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==8){
		x=31+28+31+30+31+30+31+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==9){
		x=31+28+31+30+31+30+31+31+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==10){
		x=31+28+31+30+31+30+31+31+30+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==11){
		x=31+28+31+30+31+30+31+31+30+31+a;
		printf("ngay thu %d trong nam\n",x);	
		}else if(b==12){
		x=31+28+31+30+31+30+31+31+30+31+30+a;
		printf("ngay thu %d trong nam\n",x);	
		}
		switch(x%7){
			case 1: printf("La thu hai");break;
			case 2: printf("La thu ba");break;
			case 3: printf("La thu tu");break;
			case 4: printf("La thu nam");break;
			case 5: printf("La thu sau");break;
			case 6: printf("La thu bay");break;
			case 0: printf("La chu nhat");
		}
	}else{
		printf("nhap lai du lieu");	
	}
}
