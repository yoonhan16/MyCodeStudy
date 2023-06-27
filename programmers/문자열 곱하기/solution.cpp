// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181940

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) 
{
    string answer = "";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < my_string.size(); j++)
        {
            answer += my_string[j];
        }
    } 
    return answer;
}