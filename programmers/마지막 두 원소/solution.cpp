// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181927

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> nums) 
{
    
    int last = nums[nums.size() - 1];
    int s_last = nums[nums.size() - 2];
    
    if (last > s_last)
    {
        nums.push_back(last - s_last);
    }
    else
    {
        nums.push_back(2 * last);
    }
    
    return nums;
}