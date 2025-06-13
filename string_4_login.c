/* Вартанян В 303ИС-22 

4.На вход программы подаются фамилии и имена учеников. Известно, что общее количество учеников не превосходит 100. 
В первой строке вводится количество учеников, принимавших участие в соревнованиях, N. Далее следуют N строк, имеющих следующий формат: 
<Фамилия> <Имя> 
Здесь <Фамилия> – строка, состоящая не более чем из 20 символов; <Имя> – строка, состоящая не более чем из 15 символов. 
При этом <Фамилия> и <Имя> разделены одним пробелом.
Требуется написать программу, которая формирует и печатает уникальный логин для каждого ученика по следующему правилу: 
если фамилия встречается первый раз, то логин – это данная фамилия, если фамилия встречается второй раз, 
то логин – это фамилия, в конец которой приписывается число 2 и т.д*/

#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_SURNAME 20
#define MAX_NAME 15

int main(){
	int n;
	scanf("%d", &n);
	
	char surnames[MAX_STUDENTS][MAX_SURNAME];
	int counts[MAX_STUDENTS] = {0};
	int uniq_count = 0;
	
	for(int i = 0; i < n; i = i + 1){
		char surname[MAX_SURNAME];
		char name[MAX_NAME];
		scanf("%20s %15s", surname, name);
		
		int found = 0;
		for(int j = 0; j < uniq_count; j = j + 1){
			if(strcmp(surnames[j], surname) == 0){
				counts[j]++;
				printf("%s%d\n", surname, counts[j]);
				found = 1;
				break;
			}
		}
		if(!found){
			strcpy(surnames[uniq_count], surname);
			counts[uniq_count] = 1;
			printf("%s\n", surname);
			uniq_count++;
		}
	}
	return 0;
}
