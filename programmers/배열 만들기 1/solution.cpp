// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181901

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) 
{
    vector<int> answer;
    int temp = 1;
    while ((temp*k) <= n)
    {
        answer.push_back(temp * k);
        temp++;
    }
    
    return answer;
}