// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181880

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> nums) 
{
    int answer = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        while(nums[i] != 1)
        {
            if (nums[i] % 2 != 0)
            {
                nums[i] = (nums[i]-1) / 2;
            }
            else
            {
                nums[i] = nums[i] / 2;
            }
            answer++;
        }
    }
    
    return answer;
}