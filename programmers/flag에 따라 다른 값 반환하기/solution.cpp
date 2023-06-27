// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181933

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) 
{
    int answer = 0;
    
    answer = flag ? (a + b) : (a - b);
    
    
    return answer;
}