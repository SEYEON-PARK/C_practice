/*
캥거루 세 마리가 사막에서 놀고 있다. 사막에는 수직선이 하나 있고, 캥거루는 서로 다른 한 좌표 위에 있다.
한 번 움직일 때, 바깥쪽의 두 캥거루 중 한 마리가 다른 두 캥거루 사이의 정수 좌표로 점프한다. 한 좌표 위에 있는 캥거루가 두 마리 이상일 수는 없다.
캥거루는 최대 몇 번 움직일 수 있을까?

첫째 줄에 세 캥거루의 초기 위치 A, B, C가 주어진다. (0 < A < B < C < 100)

캥거루가 최대 몇 번 움직일 수 있는지 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int A, B, C, result; // 변수 선언
    scanf("%d %d %d", &A, &B, &C); // 사용자로부터 세 개의 정수 입력받기
    
    if(B-A>C-B) // 만약, B-A가 C-B보다 크다면
    {
        result=B-A-1; // result에 B-A-1의 값 대입하기
    }
    else // B-A가 C-B보다 작거나 같다면
    {
        result=C-B-1; // result에 C-B-1의 값 대입하기
    }
    
    printf("%d", result); // 결과 출력하기
    
    return 0;
}
