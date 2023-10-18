// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181917

#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) 
{
    bool answer = (x1 || x2) && (x3 || x4);
    
    bool temp1 = (x1 || x2);
    bool temp2 = (x3 || x4);
    bool temp3 = (temp1 && temp2);
    cout << temp1 << temp2 << temp3;
    
    
    return answer;
}