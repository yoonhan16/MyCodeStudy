// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181833

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer (n, vector<int>(n,0));
    
    for (int i = 0; i < n; i++)
    {
        answer[i][i] = 1;
    }
    
    return answer;
}