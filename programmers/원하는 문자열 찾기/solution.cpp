// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181878

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string word, string pat) 
{
    
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    transform(pat.begin(), pat.end(), pat.begin(), :: toupper);
    
    return word.find(pat) != string::npos;
}

// string::npos = 찾는 대상이 없을 때의 반환값
