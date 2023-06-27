// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181934

#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) 
{
    int answer = 0;
    
    if (ineq == "<")
    {
        if (eq == "=")
        {
            answer = n <= m ? 1 : 0;
        }
        else
        {
            answer = n < m ? 1 : 0;
        }
    }
    else
    {
        if (eq == "=")
        {
            answer = n >= m ? 1 : 0;
        }
        else
        {
            answer = n > m ? 1 : 0;
        }
    }
    
    return answer;
}