// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181943

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) 
{
    string answer = "";
    for (int i = 0; i < overwrite_string.size(); i++)
    {
        my_string[s + i] = overwrite_string[i];
    }
    answer = my_string;
    return answer;
}