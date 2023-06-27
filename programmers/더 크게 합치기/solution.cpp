// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181939

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    string a_str = to_string(a);
    string b_str = to_string(b);
    
    string AtoB = a_str + b_str;
    string BtoA = b_str + a_str;
    
    if (AtoB >= BtoA)
    {
        return stoi(AtoB);
    }
    else
    {
        return stoi(BtoA);
    }
}