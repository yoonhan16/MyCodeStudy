// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181945

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }
    
    return 0;
}