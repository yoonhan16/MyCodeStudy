// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/181865

#include <string>
#include <vector>
//#include <sstream>
using namespace std;

int solution(string binomial) 
{
    int answer = 0;
    int a, b;
    char op;
    
//  stringstream ss (binomial);
//  ss >> a >> op >> b;
//  이러고 바로 switch문 진입
    
    int space = binomial.find(' ');
    a = stoi(binomial.substr(0, space));
    op = binomial[space + 1];
    b = stoi(binomial.substr(space + 2));
    
    switch (op)
    {
        case '+':
            answer = a + b;
            break;
        case '-':
            answer = a - b;
            break;
        case '*':
            answer = a * b;
            break;
    }
    return answer;
}

    // for(int i=0; i<binomial.length(); i++)
    // {
    //     if(binomial[i]=='+')
    //         answer=stoi(binomial.substr(0, i-1))+stoi(binomial.substr(i+2));
    //     else if(binomial[i]=='-')
    //         answer=stoi(binomial.substr(0, i-1))-stoi(binomial.substr(i+2));
    //     else if(binomial[i]=='*')
    //         answer=stoi(binomial.substr(0, i-1))*stoi(binomial.substr(i+2));
    // }