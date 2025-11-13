#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	int choice;
	while(1){
		printf("\n+-------------------MENU-------------------+\n");
		printf("| 1. Toan bo ky tu chuyen thanh chu hoa    |\n");
		printf("| 2. Toan bo ky tu chuyen thanh chu thuong |\n");
		printf("+------------------------------------------+\n");

		printf("Nhap mot chuoi: ");
		fgets(s,100,stdin);

		printf("\nNhap lua chon: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] >= 'a' && s[i] <= 'z') {
                    s[i] = s[i] - 32;
                }
            }
            	printf("Chuoi in hoa: %s\n", s);
            	break;
			case 2:
				for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32;
                }
            }
            	printf("Chuoi in thuong: %s\n", s);
            	break;
            
            default:
            	printf("lua chon khong hop le!\n");
            	break;
            
		}
	}		
	return 0;
}
