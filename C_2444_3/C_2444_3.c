/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, minus=3; // 변수 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<2*N-1;i++) // i가 0부터 2*N-1이 되기 전까지 1씩 증가하며 반복
    {
        if(i<=N-1) // 만약, i가 N-1보다 작거나 같다면
        {
            for(int j=0;j<N-i-1;j++) // j가 0부터 N-i-1이 되기 전까지 1씩 증가하며 반복
            {
                printf(" "); // " " 출력하기
            }
            for(int k=0;k<2*(i+1)-1;k++) // k가 0부터 2*(i+1)-1이 되기 전까지 1씩 증가하며 반복
            {
                printf("*"); // "*" 출력하기
            }
            
            printf("\n"); // 한 줄 띄기
        }
        else
        {
            for(int j=0;j<i-N+1;j++)
            {
                printf(" ");
            }
            for(int k=2*N-minus;k>0;k--)
            {
                printf("*");
            }
            minus+=2;
            
            printf("\n");
        }
        
        
    }
    
    return 0;
}
