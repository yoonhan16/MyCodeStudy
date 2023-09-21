// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181906

#include <string>
#include <vector>

using namespace std;

int solution(string word, string is_prefix) 
{
    int answer = word.substr(0, is_prefix.length()) == is_prefix ? 1 : 0;
    
    return answer;
}