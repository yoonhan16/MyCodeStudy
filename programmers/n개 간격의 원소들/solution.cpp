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

// vector<int> solution(vector<int> num_list, int n) 
// {
//     vector<int> answer;
//     for(int i = 0; i < num_list.size(); i++)
//         if(i % n == 0)                        n번째가 될때마다 추가
//             answer.push_back(num_list[i]);
//     return answer;
// }