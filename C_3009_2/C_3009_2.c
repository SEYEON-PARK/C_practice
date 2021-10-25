/*
세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

직사각형의 네 번째 점의 좌표를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2, x3, y3, x4, y4; // 변수 선언
    scanf("%d %d", &x1, &y1); // 사용자로부터 직사각형의 첫 번째 좌표 입력받기
    scanf("%d %d", &x2, &y2); // 사용자로부터 직사각형의 두 번째 좌표 입력받기
    scanf("%d %d", &x3, &y3); // 사용자로부터 직사각형의 세 번째 좌표 입력받기
    
    if(x1==x2) // 만약, x1이 x2와 같다면
    {
        x4=x3; // x4에 x3를 대입하기
    }
    else if(x1==x3) // 만약, x1이 x3와 같다면
    {
        x4=x2; // x4에 x2를 대입하기
    }
    else if(x2==x3) // 만약, x2가 x3와 같다면
    {
        x4=x1; // x4에 x1을 대입하기
    }
    
    if(y1==y2) // 만약, y1이 y2와 같다면
    {
        y4=y3; // y4에 y3를 대입하기
    }
    else if(y1==y3) // 만약, y1이 y3와 같다면
    {
        y4=y2; // y4에 y2를 대입하기
    }
    else if(y2==y3) // 만약, y2가 y3와 같다면
    {
        y4=y1; // y4에 y1을 대입하기
    }
    
    printf("%d %d\n", x4, y4); // 직사각형의 네 번째 좌표 출력하기
    
    return 0;
}
