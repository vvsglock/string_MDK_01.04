/*Вартанян В 303ИС-22

Дописать вторую строку в конец первой*/

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char s1[MAX];
	fgets(s1, MAX, stdin);
	
	char s2[MAX];
	fgets(s2, MAX, stdin);
	
	int len = 0;
	for(int i = 0; s1[i] != '\0'; i = i + 1){
		len++;
	}
	
	for(int i = len - 1, j = 0; s2[j] != '\0'; i = i + 1, j = j + 1){
		s1[i] = s2[j];
	}
	printf("%s", s1);
	return 0;
	
}
