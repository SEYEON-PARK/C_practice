/*
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=N;i>0;i--) // i가 N부터 0보다 클 때까지 1씩 줄어들며 반복
    {
        for(int j=N;j>0;j--) // j가 N부터 0보다 클 때까지 1씩 줄어들며 
        {
            printf("*");
        }
        N--;
        printf("\n");
    }
    
    return 0;
}
