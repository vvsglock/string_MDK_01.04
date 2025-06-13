/*Вартанян В 303ИС-22


2.На вход программы подается содержится текст на английском языке, заканчивающийся точкой (другие символы “.” в тексте отсутствуют). 
Требуется написать программу, которая будет определять и выводить на экран английскую букву, 
встречающуюся в этом тексте чаще всего, и количество там таких букв. 
Строчные и прописные буквы при этом считаются не различимыми. 
Если искомых букв несколько, то программа должна выводить на экран первую из них по алфавиту. */

#include <stdio.h>
#define ALPH_SIZE 26

int main(){
	int count_let[ALPH_SIZE] = {0};
	char c;
	
	while((c = getchar()) != '.'){
		if(c >= 'A' && c <= 'Z'){
			c = c + ('a' - 'A');
		}
		if(c >= 'a' && c <= 'z'){
			count_let[c - 'a']++;
		}
	}
	
	int max_count = 0;
	char popular = 'a';
	for(int i = 0; i < ALPH_SIZE; i = i + 1){
		if(count_let[i] > max_count){
			max_count = count_let[i];
			popular = 'a' + i;
		}
		else if(count_let[i] == max_count && ('a' + i) < popular){
			popular = 'a' + i;
		}
	}
	if(max_count > 0){
		printf("%c %d\n", popular - 32, max_count);
	}
	else{
		printf("No popular let");
	}
	return 0;
}
