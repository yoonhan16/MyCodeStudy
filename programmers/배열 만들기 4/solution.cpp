// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181918

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int count = 0;
    
    while (count < arr.size())
    {
        if (stk.empty())
        {
            stk.push_back(arr[count]);
            count++;
        }
        else
        {
            if (stk.back() < arr[count])
            {
                stk.push_back(arr[count]);
                count++;
            }
            else if (stk.back() >= arr[count])
            {
                stk.pop_back();
            }
        }
    }
    
    return stk;
}