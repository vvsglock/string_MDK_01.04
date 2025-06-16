/*Вартанян В 303ИС-22

Перевернуть строку*/

#include <stdio.h>
#define MAX 100

int main(){
	char s[MAX];
	fgets(s, 100, stdin);
	
	int len = 0;
	for(int i = 0; s[i] != '\0'; i = i + 1){
		len++;
	}
	
	char temp;
	for(int i = 0, j = len - 1; i < j; i = i + 1, j = j - 1){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	printf("%s", s);
	return 0;
}
