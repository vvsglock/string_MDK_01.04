/*Вартанян В 303ИС-22

Распечатать строку в обратном порядке*/

#include <stdio.h>
#define MAX 100

int main(){
	char s[MAX];
	fgets(s, 100, stdin);
	
	int len = 0;
	for(int i = 0; s[i] != '\0'; i = i + 1){
		len++;
	}
	
	for(int i = len; i >= 0; i = i - 1){
		printf("%c", s[i]);
	}
	return 0;
}
