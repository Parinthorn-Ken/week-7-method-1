#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int main() {
	char str[10000];
	printf("Input : ");
	scanf("%s", str);
	int x=strlen(str);
	printf("Output : \n");
	for (int i=x; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;

}