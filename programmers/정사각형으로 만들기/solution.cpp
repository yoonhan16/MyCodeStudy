// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181830

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{   
    if (arr.size() < arr[0].size())
    {
        arr.resize(arr[0].size());
        
        for(int i = 0; i < arr.size(); i++)
        {
            arr[i].resize(arr.size());
        }
    }
    else
    {
        for(int i = 0; i < arr.size(); i++)
        {
            arr[i].resize(arr.size());
        }
    }
    
    return arr;
}