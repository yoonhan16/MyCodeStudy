// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181851

#include <string>
#include <vector>
#include <map>
using namespace std;

map <int,int> temp;

int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
    
    for (int i = 0; i < rank.size(); i++)
    {
        temp.insert(pair<int,int>(rank[i], i));
    }
    
    vector<int>chosen;
    for (auto idx : temp)
    {
        if (attendance[idx.second] && chosen.size() < 3)
        {
            chosen.emplace_back(idx.second);
        }   
    }
    
    answer = 10000 * chosen[0] + 100 * chosen[1] + chosen[2];
    
    return answer;
}