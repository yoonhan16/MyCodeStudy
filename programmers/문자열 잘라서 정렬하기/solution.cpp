// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181866

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> solution(string word) 
{
    vector<string> answer;
    string token;
    stringstream ss(word);
    
    while (getline(ss, token, 'x'))
    {
        if (!token.empty())
        {
            answer.push_back(token);
        }
    }
 
    sort(answer.begin(), answer.end());
    
    return answer;
}

// vector<string> solution(string myString) 
// {
//     vector<string> answer;
//     int index = 0;
//     for (int i=0;i<myString.length();i++)
//     {
//         if (myString[i]=='x')
//         {
//             if (index!=i)answer.push_back(myString.substr(index,i-index));
//             index = i+1;
//         }
//     }
//     if (index!=myString.length())answer.push_back(myString.substr(index,myString.length()-index));
//     sort(answer.begin(),answer.end());
//     return answer;
// }
