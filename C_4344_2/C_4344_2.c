/*
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다. 정답과 출력값의 절대/상대 오차는 10의 -3승 이하이면 정답이다.
*/

#include <stdio.h>

int main(void)
{
    int C; // 변수 선언
    scanf("%d", &C); // 사용자로부터 정수(테스트 케이스의 개수) 입력받기
    
    int array[1000]; // 배열 선언
    
    for(int i=0;i<C;i++) // i에 0부터 C가 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        int sum=0, count=0; // 변수 선언 및 초기화
        double T, avg; // 변수 선언
        
        scanf("%lf", &T); // 사용자로부터 실수(학생의 수) 입력받기
        
        for(int j=0;j<T;j++) // j에 0부터 T가 되기 전까지 1씩 증가시킨 값을 대입하며 반복
        {
            scanf("%d", &array[j]); // 사용자로부터 정수(학생의 점수) 입력받기
            sum+=array[j]; // sum에 sum+array[j]의 값 대입하기
        }
        
        avg=sum/T;
        
        for(int j=0;j<T;j++)
        {
            if(array[j]>avg)
                count++;
        }
        
        printf("%.3lf%\n", count/T*100);
    }
    
    return 0;
}
