// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181881

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) 
{
    int answer = 0;
    
    vector<int> temp(arr.begin(), arr.end());
    
    do
    {
        for (int idx = 0; idx < temp.size(); idx++)
        {
            if (temp[idx] % 2 != 0 && temp[idx] < 50)
            {
                temp[idx] = temp[idx] * 2 + 1;
            }
            else if (temp[idx] % 2 == 0 && temp[idx] >= 50)
                {
                temp[idx] /= 2;
            }
        }
        if (arr == temp)
        {
            break;
        }
        else
        {
            answer++;
            arr = temp;
        }
    } while (true);

    return answer;
}