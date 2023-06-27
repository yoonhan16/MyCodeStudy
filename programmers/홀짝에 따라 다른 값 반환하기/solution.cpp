// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181935

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{   
    int answer = 0;
    
    if (n % 2 != 0)
    {
        for (int i = n; i > 0; i -= 2)
        {
            answer += i;
        }
    }
    else
    {
        for (int i = n; i > 0; i -= 2)
        {
            answer += (i * i);
        }
    }
    
    return answer;
}