// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181928

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> nums) 
{
    string temp = "";
    string temp2 = "";
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 != 0)
        {
            temp += to_string(nums[i]);
        }
        else
        {
            temp2 += to_string(nums[i]);
        }
    }
    
    return stoi(temp) + stoi(temp2);
}