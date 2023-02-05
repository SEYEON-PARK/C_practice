/*
영문 문장을 입력받아 모음의 개수를 세는 프로그램을 작성하시오. 모음은 'a', 'e', 'i', 'o', 'u'이며 대문자 또는 소문자이다.

입력은 여러 개의 테스트 케이스로 이루어져 있으며, 각 줄마다 영어 대소문자, ',', '.', '!', '?', 공백으로 이루어진 문장이 주어진다. 각 줄은 최대 255글자로 이루어져 있다.
입력의 끝에는 한 줄에 '#' 한 글자만이 주어진다.

각 줄마다 모음의 개수를 세서 출력한다.
*/

#include <stdio.h>
#include <ctype.h> // isalpha(), toupper()을 사용하기 위해서

int main(void)
{
    while(1) // 무한 반복
    {
        char s[256]; // 배열 선언
        gets(s); // 사용자로부터 문자열 입력받기(띄어쓰기 상관없이 한 줄 입력받고자 gets()를 사용했다.)
        
        if(s[0]=='#') // 만약, s[0]이 '#'과 같다면
            break; // 반복문 빠져 나가기
        
        int count=0; // 변수 선언 및 초기화
        for(int i=0;s[i]!='\0';i++) // i가 0부터 s[i]가 '\0'이 아닐 때까지 i를 1씩 증가시키며 반복
        {
            if(isalpha(s[i])) // 만약, s[i]가 알파벳이면
            {
                char a=toupper(s[i]); // s[i]를 대문자로 바꾸어 변수 a에 저장
                if(a=='A' || a=='E' || a=='O' || a=='I' || a=='U') // 만약, a가 'A'와 같거나 'E'와 같거나 'O'와 같거나 'I'와 같거나 'U'와 같다면
                    count++; // count에 1 더하기
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
