// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181902

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string word) 
{
    vector<int> answer(52);
    
    for (char i : word)
    {
        if (i >= 'A' && i <= 'Z')
        {
            answer[i - 'A']++;
        }
        else if (i >= 'a' && i <= 'z')
        {
            answer[i - 'a' + 26]++;
        }
    }

    return answer;
}