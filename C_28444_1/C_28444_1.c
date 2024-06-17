/*
HI-ARC 학회는 일상 속의 문장들을 수식으로 표현하는 것을 즐기는 특이한 문화를 가지고 있다.
HI-ARC 수식은 HI-ARC 학회에서 최근에 개발한 독특한 수식으로, 아래와 같은 규칙으로 계산한다.
  H와 I의 곱이 첫 번째 항이다.
  A와 R과 C의 곱이 두 번째 항이다.
  결과값은 첫 번째 항에서 두 번째 항을 뺀 값이다.
각각의 문자에 대응되는 숫자가 입력될 때, 결과값을 출력하자!

첫째 줄에 각 문자에 들어갈 값 H, I, A, R, C (0 <= H, I, A, R, C <= 100, H, I, A, R, C는 정수)가 공백을 사이에 두고 순서대로 주어진다.

수식을 계산한 결과값을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int H, I, A, R, C; // 변수 선언
    scanf("%d %d %d %d %d", &H, &I, &A, &R, &C); // 사용자로부터 다섯 개의 정수 입력받기
    
    int first = H * I;
    int second = A * R * C;
    
    printf("%d", first - second);
    
    return 0;
}
