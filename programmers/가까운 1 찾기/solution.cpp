// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181898

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) 
{
    int answer = 0;
    
    for (int i = idx; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            answer = i;
            break;
        }
        else
        {
            answer = -1;
        }
    }
    return answer;
}