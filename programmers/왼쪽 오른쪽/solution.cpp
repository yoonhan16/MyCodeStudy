// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181890

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> str_list) 
{
    vector<string> answer;
    int temp = 0;
    
    for (int i = 0; i < str_list.size(); i++)
    {
        if (str_list[i] == "l")
        {
            temp = i;
            
            for (int j = 0; j < temp; j++)
            {
                answer.emplace_back(str_list[j]);
            }
            break;
        }
        else if (str_list[i] == "r")
        {
            temp = i+1;
            
            for (int j = temp; j < str_list.size(); j++)
            {
                answer.emplace_back(str_list[j]);
            }
            break;
        }
    }
    
    
    
    cout << temp << endl;
    
    return answer;
}