// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181884

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num, int n) 
{
    int answer = 0;
    
    for (int i = 0; i < num.size(); i++)
    {
        if (answer > n) break;
        answer += num[i];
    }
    
    return answer;
}