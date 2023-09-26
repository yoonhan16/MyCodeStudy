// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181861

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}

// vector<int> solution(vector<int> arr) 
// {
//     vector<int> answer;
//     for(int i=0 ; i<arr.size() ; i++)
//         answer.insert(answer.end(), arr[i], arr[i]);
//         answer 배열의 끝에 arr[i] 를 arr[i] 만큼 삽입
//     return answer;
// }
