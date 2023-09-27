// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181875

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++)
    {
        if (i % 2 != 0)
        {
            for (int odd = 0; odd < strArr[i].length(); odd++)
            {
                strArr[i][odd] = toupper(strArr[i][odd]);
            }
        }
        else
        {
            for (int even = 0; even < strArr[i].length(); even++)
            {
                strArr[i][even] = tolower(strArr[i][even]);
            }
        }
        answer.push_back(strArr[i]);
    }
    
    return answer;
}