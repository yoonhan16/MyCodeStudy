// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181903

#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) 
{
    string answer = "";
    
    for (int i = 0; i < code.size(); i++)
    {
        if (i % q == r)
        {
            answer += code[i];
        }
    }
    
    return answer;
}