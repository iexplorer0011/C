# C프로그래밍응용

- **1주차**: 배열

- **2주차~3주차**: 포인터
   
- **4주차~5주차**: 문자열


## 5주차 요약

### - string.h
`int strlen(char *str);`

- str(문자열)의 길이를 반환
- 길이에 NULL은 포함 X

`char* strcpy(char *dest, char *source);`
- dest에 source를 복사

`int strcmp(char *src, char *dest);`
- 문자열 비교 함수
- 두 문자열이 같으면 0을 반환
- 다른 문자가 존재하면 두 문자 사이의 거리값(?)을 출력
- EX. `strcmp("ABC", "ABD"); // Return -1`

`char* strcat(char *dest, const char *src);`
- dest(문자열) 뒤에 src(문자열)를 이어붙임