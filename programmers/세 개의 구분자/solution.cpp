// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181862

#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    string temp;
    for (int idx = 0; idx < myStr.size(); idx++)
    {
        if (myStr[idx] > 'c')
        {
            temp += myStr[idx];
        }
        else
        {
            if (temp.empty())
            {
                continue;
            }
            else
            {
                answer.emplace_back(temp);
                temp = "";
            }
        }
    }
    if (temp.empty())
    {
        answer.emplace_back("EMPTY");
    }
    else
    {
        answer.emplace_back(temp);
    }
    
//     for (int i = 0; i < myStr.size(); i++)
//     {
//         if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
//         {
//             myStr[i] = ' ';
//         }
//     }
    
//     string str_temp;
//     stringstream ss;
//     ss.str(myStr);
//    
//     while (ss >> str_temp)
//     {
//         answer.emplace_back(str_temp);
//     }
//    
//     if (answer.empty())
//     {
//         answer.emplace_back("EMPTY");
//     }

    return answer;
}