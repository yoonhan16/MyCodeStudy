// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181909

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    
    for (int i = 0; i < my_string.length(); i++)
    {
        answer.push_back(my_string.substr(i, string::npos));
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}