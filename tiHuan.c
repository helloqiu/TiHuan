#include<stdio.h>
#include<string.h>
int main(void){
	char str[100];
	char a;
	char b;
	printf("please enter the string : \n");
	scanf("%s" , str);
	getchar();
	printf("please enter a letter : \n");
	scanf("%c" , &a);
	getchar();
	printf("please enter the other one : \n");
	scanf("%c" , &b);
	for (int i = 0 ; i < strlen(str) ; i ++){
		if(str[i] == a){
			str[i] = b;
		}
		printf("%c" , str[i]);
	}
}
