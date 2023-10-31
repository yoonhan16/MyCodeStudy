// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181837

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) 
{
    int answer = 0;
    
    for (string menu : order)
    {
        if (menu.find("cafe") != string::npos)
        {
            answer += 5000;
        }
        else
        {
            answer += 4500;
        }
    }
    
    return answer;
}