/*Вартанян В 303ИС-22

Длина строки*/

#include <stdio.h>
#define MAX 100
int main(){
	char s[MAX];
	fgets(s, 100, stdin);
	
	int len = 0;
	for(int i = 0; s[i] != '\0'; i = i + 1){
		len = len + 1;
	}
	printf("%d", len - 1);
	return 0;
}
