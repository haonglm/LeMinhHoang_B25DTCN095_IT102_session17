#include<stdio.h>
#include<string.h>

int main(){
    
	char str1[200], str2[100];
    printf("Nhap chuoi thu 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Nhap chuoi thu 2: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, " ");
    strcat(str1, str2);

    printf("Chuoi moi la: %s\n", str1);
    return 0;
}

