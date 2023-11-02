// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181923

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    
    for (int i = 0; i < queries.size(); i++)
    {
        int temp = 1000001;
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (queries[i][2] < arr[j] && arr[j] < temp)
            {
                temp = arr[j];
            }
        }
        if (temp == 1000001) answer.emplace_back(-1);
        else answer.emplace_back(temp);
    }
    
    return answer;
}