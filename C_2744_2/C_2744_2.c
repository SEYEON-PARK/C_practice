/*
영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

첫째 줄에 입력으로 주어진 단어에서 대문자는 소문자로, 소문자는 대문자로 바꾼 단어를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[101];
    scanf("%s", s);
    
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
        else
        {
            s[i]-=32;
        }
    }
    
    printf("%s", s);
    
    return 0;
}
