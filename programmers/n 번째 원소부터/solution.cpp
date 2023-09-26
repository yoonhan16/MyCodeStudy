// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181892

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> nums, int n) 
{
    vector<int> answer;
    
    for (int i = n-1; i < nums.size(); i++)
    {
        answer.push_back(nums[i]);
    }
    
    return answer;
}

// vector<int> solution(vector<int> num_list, int n) 
// {
//     vector<int> answer;
//     answer.assign(num_list.begin()+n-1, num_list.end());
//     return answer;
// }
