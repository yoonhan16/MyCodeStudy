// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181908#

#include <string>
#include <vector>
using namespace std;

int solution(string word, string suffix) 
{
    int answer = 1;
    
    if (suffix.size() <= word.size())
    {
        for (int i = 1; i <= suffix.size(); i++)
        {
            if (suffix[suffix.size()-i] != word[word.size()-i])
            {
                answer = 0;
                break;
            }
        }
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}