/*
첫째 줄과 N+2번째 줄에는 골뱅이 N+2개를 출력한다.
둘째 줄부터 N+1번째 줄까지는 예제 출력과 같은 방식으로 골뱅이 2개와 공백 N개를 출력한다.

첫째 줄에 정수 N(1 <= N <= 100)이 주어진다.

첫째 줄부터 N+2번째 줄까지 차례대로 골뱅이를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 정수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<N+2;i++) // i가 0부터 N+2보다 작을 때까지 1씩 증가하며 반복
    {
        printf("@"); // "@" 출력하기
    }
    printf("\n"); // 한 줄 띄기
    
    for(int j=0;j<N;j++)
    {
        printf("@"); // 
        for(int i=0;i<N;i++)
        {
            printf(" ");
        }
        printf("@\n");
    }
    
    for(int i=0;i<N+2;i++)
    {
        printf("@");
    }
    
    return 0;
}
