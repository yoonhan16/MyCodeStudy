// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181879?language=cpp

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int answer_mult = 1;
    
    if (num_list.size() <= 10)
    {
        for (int i = 0; i < num_list.size(); i++)
        {
            answer_mult *= num_list[i];
            answer = answer_mult;
        }
    }
    else
    {
        for (int i = 0; i < num_list.size(); i++)
        {
            answer += num_list[i];
        }
        
    }
    
    return answer;
}