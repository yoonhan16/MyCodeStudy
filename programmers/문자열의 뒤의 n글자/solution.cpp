// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181910

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    
    for (int i = my_string.size() - n; i < my_string.size(); i++)
    {
        answer += my_string[i];
    }
    
    return answer;
}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string my_string, int n) {
//    string answer = "";
//    answer = my_string.substr(my_string.length() - n);
//    return answer;
//}
