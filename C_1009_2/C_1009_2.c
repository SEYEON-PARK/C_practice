/*
재용이는 최신 컴퓨터 10대를 가지고 있다. 
어느 날 재용이는 많은 데이터를 처리해야 될 일이 생겨서 각 컴퓨터에 1번부터 10번까지의 번호를 부여하고, 10대의 컴퓨터가 다음과 같은 방법으로 데이터들을 처리하기로 하였다.
1번 데이터는 1번 컴퓨터, 2번 데이터는 2번 컴퓨터, 3번 데이터는 3번 컴퓨터, ... ,
10번 데이터는 10번 컴퓨터, 11번 데이터는 1번 컴퓨터, 12번 데이터는 2번 컴퓨터, ...
총 데이터의 개수는 항상 ab개의 형태로 주어진다. 재용이는 문득 마지막 데이터가 처리될 컴퓨터의 번호가 궁금해졌다. 이를 수행해주는 프로그램을 작성하라.

입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트 케이스에 대해 정수 a와 b가 주어진다. (1 ≤ a < 100, 1 ≤ b < 1,000,000)

각 테스트 케이스에 대해 마지막 데이터가 처리되는 컴퓨터의 번호를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int T, a, b; // 변수 선언
    scanf("%d", &T); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<T;i++) // i가 0부터 T가 되기 전까지 1씩 증가하며 반복
    {
        scanf("%d %d", &a, &b); // 사용자로부터 두 개의 정수 입력받기
        int r=a; // r에 a 대입하기
        a=1; // a에 1 대입하기
        
        for (int j = b; j > 0; j--) // j가 b부터 0보다 클 때까지 1씩 감소하며 반복
        {
            a *= r; // a에 a*r의 값 대입하기
            a %= 10; // a에 a%10의 값 대입하기
        }

        if (a == 0) // 만약, a가 0이라면
        {
            printf("10\n"); // "10" 출력하기
        }
        else // a가 0이 아니라면
        {
            printf("%d\n", a); // a의 값 출력하기
        }
    }

    return 0;
}
