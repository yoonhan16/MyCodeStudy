// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181886

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) 
{
    vector<string> answer;
    
    for (int i = 0; i < names.size(); i++)
    {
        if (i % 5 == 0)
         {
             answer.push_back(names[i]);
         }
    }
    
    return answer;
}