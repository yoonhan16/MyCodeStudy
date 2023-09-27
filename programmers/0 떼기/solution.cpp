// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181847

#include <string>
#include <vector>

using namespace std;

string solution(string n_str) 
{
    string answer = "";
    
    for (int i = 0; i < n_str.length(); i++)
    {
        if (n_str[i] != '0')
        {
            n_str.erase(0, i);
            answer += n_str;
            break;
        }
    }
    
    return answer;
}