// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181912

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) 
{
    vector<int> answer;
    string temp = "";
    for (int i = 0; i < intStrs.size(); i++)
    {
        for (int j = s; j < s + l; j++)
        {
            temp += intStrs[i][j];
        }
    
        if (k < stoi(temp))
        {
            answer.push_back(stoi(temp));
            temp = "";
        }
        else
        {
            temp = "";
        }
    }
    
    return answer;
}