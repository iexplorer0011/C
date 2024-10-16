# C프로그래밍응용

- **1주차**: 배열

- **2주차~3주차**: 포인터
   
- **4주차~5주차**: 문자열

## 4주차 요약
### - 문자열
- 문자열의 끝은 반드시 `NULL`로 끝나야 한다.
- 예시) char message1[] = {'a', 'b', 'c'} -> 문자배열, char message2[] = {'a', 'b', 'c', '\0'} -> 문자열

`getchar()`
- 입력 버퍼에서 문자 한 개를 가져와 반환해주는 함수
- 입력 버퍼가 비어있을 경우, 사용자가 엔터키를 누를 때까지 입력받음.

`gets()`
- 인자로 받은 주소에 입력받은 문자열을 저장하는 함수
- 입력받는 크기에 제약이 없기 때문에 보안에 취약함

`puts()`
- 인자로 받은 문자열을 출력하는 함수
- `NULL` 전까지 출력
- 문자열의 끝에 자동으로 개행문자(`'\n'`)를 추가한다.

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
- 예시) `strcmp("ABC", "ABD"); // Return -1`

`char* strcat(char *dest, const char *src);`
- dest(문자열) 뒤에 src(문자열)를 이어붙임