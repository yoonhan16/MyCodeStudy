// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181897

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) 
{
    vector<int> answer;
    
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch (n)
    {
        case 1:
            for (int i = 0; i <= b; i++)
            {
                answer.emplace_back(num_list[i]);
            }
            break;
        case 2:
            for (int i = a; i < num_list.size(); i++)
            {
                answer.emplace_back(num_list[i]);
            }
            break;
        case 3:
            for (int i = a; i <= b; i++)
            {
                answer.emplace_back(num_list[i]);
            }
            break;
        case 4:
            for (int i = a; i <= b; i+=c)
            {
                answer.emplace_back(num_list[i]);
            }
            break;
        default:
            break;;
    }
    
    return answer;
}

    // switch(n)
    // {
    //     case 1: return vector<int>(num_list.begin(), num_list.begin()+b+1);
    //     case 2: return vector<int>(num_list.begin()+a, num_list.end());
    //     case 3: return vector<int>(num_list.begin()+a, num_list.begin()+b+1);
    //     case 4: {
    //         vector<int> answer;
    //         for(int i = a; i <= b; i += c)
    //             answer.push_back(num_list[i]);
    //         return answer;
    //     }
    // }
