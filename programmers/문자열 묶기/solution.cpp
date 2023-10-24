// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181855

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) 
{
    int answer = 0;
    int cnt[31] = {0,};
    
    for (int i = 0; i < strArr.size(); i++)
    {
        cnt[strArr[i].size()]++;
    }
    
    answer = *max_element(cnt, cnt+31);
    
    return answer;
}