// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181839

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    
    if (a % 2 == 1 && b % 2 == 1)
    {
        answer = (a*a) + (b*b);
    }
    else if (a % 2 == 1 || b % 2 == 1)
    {
        answer = 2 * (a + b);
    }
    else
    {
        answer = a - b;
        if (answer < 0) 
        {
            answer *= -1;
        }
    }
    
    return answer;
}


// answer = abs(a-b); 절대값 구하는 함수 (3번 케이스)