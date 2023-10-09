// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181925

#include <string>
#include <vector>
//#include <map>
using namespace std;

string solution(vector<int> numLog) 
{
    string answer = "";
    
    for (int i = 1; i <= numLog.size(); i++)
    {
        if (numLog[i] - numLog[i-1] >= 0)
        {
            if (numLog[i] - numLog[i-1] >= 10)
            {
                answer+= 'd';
            }
            else
            {
                answer+= 'w';
            }
        }
        else if (numLog[i] - numLog[i-1] < 0)
        {
            if (numLog[i] - numLog[i-1] <= -10)
            {
                answer+= 'a';
            }
            else
            {
                answer+= 's';
            }
        }
    }
    answer.pop_back();
    
    return answer;
}


// map <int, string> m = { {1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"} };
// string solution(vector<int> numLog) {
//     string answer = "";
//     for (int i = 1; i < numLog.size(); i++)
//         answer += m[numLog[i] - numLog[i - 1]];
//     return answer;
// }