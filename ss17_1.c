#include<stdio.h>
#include<string.h>
int main(){
	
	char s[100];
	printf("nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	
	s[strcspn(s, "\n")] = '\0';
	
	char clean[100];
	int j = 0;
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] != ' '){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				clean[j++] = s[i] + 32;
			}else{
				clean[j++] = s[i];
			}
		}
	}
	clean[j] = '\0';
	
	int len = strlen(clean);
	int isPalindrome = 1;
	for(int i = 0; i < len/2; i++){
		if(clean[i] != clean[len - i - 1]){
			isPalindrome = 0;
			break;
		}
	} 
	
	if(isPalindrome){
		printf("la Palindrome !!\n");
	}else{
		printf("khong phai la Palindrome !!\n");
	}
	return 0;
} 
