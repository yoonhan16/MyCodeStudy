// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181857

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int temp = 1;
    
    while (temp < arr.size())
    {
        temp *= 2;
    }
    
    while (arr.size() < temp)
    {
        arr.emplace_back(0);
    }
    
    return arr;
}