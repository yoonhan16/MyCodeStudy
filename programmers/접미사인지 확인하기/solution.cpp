// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181908

#include <string>
#include <vector>
using namespace std;

int solution(string word, string suffix) 
{
    int answer = 1;
    
    for (int i = 0; i < suffix.size(); i++)
    {
        if (word.size() < suffix.size() || word.back() != suffix.back())
        {
            answer = 0;
            break;
        }
        
        
        
    }
    
    
    return answer;
}