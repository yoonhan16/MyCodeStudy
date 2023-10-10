// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181900

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string word, vector<int> indices) 
{   
    sort(indices.begin(), indices.end(), greater<int>());
    for (int i = 0; i < indices.size(); i++)
    {
        word.erase(indices[i], 1);
    }
    return word;
}