// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181887

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> nums) 
{
    int answer = 0;
    int odd = 0;
    int even = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            odd += nums[i];
        }
        else
        {
            even += nums[i];
        }
    }
    
    return answer = (odd > even) ? odd : even;
}