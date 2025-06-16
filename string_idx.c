/*Вартанян В 303ИС-22

Индекс первого вхождения символа в строку*/

#include <stdio.h>
#define MAX 100

int main(){
	char s[MAX];
	fgets(s, MAX, stdin);
	
	char sym;
	scanf("%c", &sym);
	
	for(int i = 0; s[i] != '\0'; i = i + 1){
		if(s[i] == sym){
			printf("%d", i + 1);
			break;
		}
	}
	return 0;
}
