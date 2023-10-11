// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181924

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    
    for (int i = 0; i < queries.size(); i++)
    {
        int temp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = temp;
        temp = 0;
    }
    
    return arr;
}