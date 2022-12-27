/*
영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

첫째 줄에 입력으로 주어진 단어에서 대문자는 소문자로, 소문자는 대문자로 바꾼 단어를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[101]; // 배열 선언
    scanf("%s", s); // 사용자로부터 문자열 입력받기
    
    for(int i=0;s[i]!=NULL;i++) // i가 0부터 s[i]가 NULL이 아닐 때까지 i를 1씩 증가시키며 반복
    {
        if(s[i]>='A' && s[i]<='Z') // 만약, s[i]가 'A'보다 크거나 같고 s[i]가 'Z'보다 작거나 같다면
        {
            s[i]+=32; // s[i]에 s[i]+32의 값 대입하기
        }
        else // s[i]가 'A'보다 작거나 s[i]가 'Z'보다 크다면
        {
            s[i]-=32; // s[i]에 s[i]-32의 값 대입하기
        }
    }
    
    printf("%s", s); // 결과 출력하기
    
    return 0;
}
