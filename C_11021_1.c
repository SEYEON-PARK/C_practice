/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
*/

#include <stdio.h>

int main(void)
{
    int A, B, T; // 변수 선언
    scanf("%d", &T); // 사용자로부터 테스트 케이스의 개수 입력받기
    
    for(int i=0;i<T;i++) // i가 0부터 T보다 작을 때까지 1씩 증가하며 반복
    {
        scanf("%d %d", &A, &B); // 사용자로부터 두 개의 정수 입력받기
        printf("Case #%d: %d\n", i+1, A+B); // 형식에 맞춰 결과 출력하기
    }
    
    return 0;
}

