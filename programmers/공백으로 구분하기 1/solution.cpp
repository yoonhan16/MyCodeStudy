// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181869

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string word) 
{
    vector<string> answer;
    string temp;
    
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != ' ')
        {
            temp += word[i];
        }
        else
        {
            answer.push_back(temp);
            temp = "";
        }
    }
    answer.push_back(temp);
    return answer;
}