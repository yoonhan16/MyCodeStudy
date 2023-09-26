// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181888

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> nums, int n) 
{
    vector<int> answer;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if ((i*n) > nums.size()-1) break;
        answer.push_back(nums[i*n]);
    }
    
    return answer;
}