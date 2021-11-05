#include <stdio.h>
int main(){
	for( int i ; ; ){
		printf("------MENU------\n 1.Chon mon an\n 2.Goi do uong\n 3.Thanh toan\n 4.Thoat chuong trinh\n");
		printf("Xin moi chon mon\n");
		scanf("%d",&i);
		if(i==1){
			for(int j ; ; ){
				printf("Menu mon an\n 1.Com ga\n 2.Pho\n 3.Bun\n 4.Quay lai\n");
				scanf("%d",&j);
				if(j==1){
					printf("1.Com ga\n Xin cam on!\n");
					break;
				}else if(j==2){
					printf("2.Pho\n Xin cam on!\n");
					break;
				}else if(j==3){
					printf("3.Bun\n Xin cam on!\n");
					break;
				}else if(j==4){
					break;
				}else if(j<=0||j>4){
					printf("Xin moi chon lai!\n");
				}
			}
		}else if(i==2){
			for(int j ; ; ){
				printf("Menu do uong\n 1.Bia\n 2.Nuoc ngot\n 3.Nuoc loc\n 4.Quay lai\n");
				scanf("%d",&j);
				if(j==1){
					printf("1.Bia\n Xin cam on!\n");
					break;
				}else if(j==2){
					printf("2.Nuoc ngot\n Xin cam on!\n");
					break;
				}else if(j==3){
					printf("3.Nuoc loc\n Xin cam on!\n");
					break;
				}else if(j==4){
					break;
				}else if(j<=0||j>4){
					printf("Xin moi chon lai!\n");
				}	
			}
		}else if(i==3){
			printf("Vui long thanh toan\n So tien ban phai thanh toan la:\n Xin cam on, hen gap lai quy khach!\n");
		}else if(i==4){
			break;
		}else if(i<=0||i>4){
			printf("Xin moi chon lai!\n");
		}
	}
}
