/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, a; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기

    for(int i=0;i<2*N;i++) // i가 0부터 2*N이 되기 전까지 1씩 증가하며 반복
    {
        if(i%2==0) // i%2의 값이 0과 같다면
            a=1; // a에 1 대입하기
        else // i%2의 값이 0과 같지 않다면
            a=0; // a에 0 대입하기
            
        for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
        {
            if(a%2==1) // a%2의 값이 1과 같다면
            {
                printf("*"); // "*" 출력하기
                ++a; // a에 1 더하기
            }
            else // a%2의 값이 1과 같지 않다면
            {
                printf(" "); // " " 출력하기
                ++a; // a에 1 더하기
            }
        }
        printf("\n"); // 한 줄 띄기
    }
    
    return 0;
}
