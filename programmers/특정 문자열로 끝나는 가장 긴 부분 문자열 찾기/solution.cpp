// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181872

#include <string>
#include <vector>

using namespace std;

string solution(string word, string pat) 
{
    string answer = "";
    int temp = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word.substr(i, pat.size()) == pat)
        {
            temp = i;
        }
    }
    answer = word.substr(0, temp + pat.size());
    
    return answer;
}