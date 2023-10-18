// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181905

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string word, int s, int e) 
{
    string temp = "";
    for (int i = 0; i < word.size(); i++)
    {
        if (i >= s && i <= e)
        {
            temp += word[i];
        }
    }
    reverse(temp.begin(), temp.end());
    word.replace(s, temp.size(), temp);
    
    return word;
}

// string solution(string word, int s, int e) 
// {
//     reverse(word.begin()+s, word.begin()+e+1);
//     return word;
// }

