// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181907

#include <string>
#include <vector>

using namespace std;

string solution(string word, int n) 
{
    string answer = "";
    
    for (int i = 0; i < word.size(); i++)
    {
        if (i == n) break;
        answer += word[i];
    }
    return answer;
}

// return my_string.substr(0,n);
