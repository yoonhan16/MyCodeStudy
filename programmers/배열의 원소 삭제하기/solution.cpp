// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181844

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) 
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (find(delete_list.begin(), delete_list.end(), arr[i]) == delete_list.end())
        {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}

    // for(int i=0; i<delete_list.size(); i++)
    //     for(int j=0; j<arr.size(); j++)
    //         if(arr[j]==delete_list[i])
    //             arr.erase(arr.begin()+j);
    // answer=arr;
