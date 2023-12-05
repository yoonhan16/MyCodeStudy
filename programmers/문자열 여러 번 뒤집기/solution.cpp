// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181913

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string word, vector<vector<int>> queries) 
{
    string answer = word;
    int i = 0;
    
    while (i < queries.size())
    {
        reverse(answer.begin()+queries[i][0], answer.begin()+queries[i][1]+1);
        i++;
    }
    
    return answer;
}