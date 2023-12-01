#include<stdio.h>
#include<stdlib.h> 
int main(){
char str[];

do{
		printf("MENU\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao 1 chuoi ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
			
				break;
			case 3:
			
				break;
			case 4:
			
				break;
			case 5:
			
				break;
			case 6:
			
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
}
