// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181919

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    
    while (n != 1)
    {
        answer.push_back(n);
        if (n % 2 != 0)
        {
            n = (3*n) + 1;
        }
        else
        {
            n = n / 2;
        }
    }
    answer.push_back(n);
    
    return answer;
}