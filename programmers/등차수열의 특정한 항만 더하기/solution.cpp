// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181931

#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) 
{
    int answer = 0;
    for (int i = 0; i < included.size(); i++)
    {
        if (included[i] == true)
        {
            answer += a + (i * d);
        }
    } 
    return answer;
}