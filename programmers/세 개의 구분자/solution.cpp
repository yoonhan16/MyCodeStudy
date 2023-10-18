// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181862

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    string temp;
    for (int idx = 0; idx < myStr.size(); idx++)
    {
        if (myStr[idx] > 'c')
        {
            temp += myStr[idx];
        }
        else
        {
            if (temp.empty())
            {
                continue;
            }
            else
            {
                answer.push_back(temp);
                temp = "";
            }
        }
    }
    if (temp.empty())
    {
        answer.push_back("EMPTY");
    }
    else
    {
        answer.push_back(temp);
    }
    return answer;
}