/*
20.validParentheses
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    while(std::cin.peek() != EOF)
    {
        std::string inputs;
        std::cin>>inputs;
        int len = inputs.length();
        stack<char> stack;
        bool flag = true;
        for(int i=0;i<len;i++)
        {
            //左括号，入栈
            if(inputs[i] == '('||inputs[i] == '{'||inputs[i]=='[')
                stack.push(inputs[i]);
            else if(stack.empty())
            {
                std::cout<<"Output: false";
                flag = false;
                break;
            }
            else{
                if(inputs[i] != ')' && stack.top() == '(')
                {
                    std::cout<<"Output: false";
                    flag = false;
                    break;
                }
                else if(inputs[i] != '}' && stack.top() == '{')
                {
                    std::cout<<"Output: false";
                    flag = false;
                    break;
                }
                else if(inputs[i] != ']' && stack.top() == '[')
                {
                    std::cout<<"Output: false";
                    flag = false;
                    break;
                }
                else{
                    //出栈
                    stack.pop();
                }
            }
        }
        if(flag && stack.empty())
            std::cout<<"Output: true";
        else
            std::cout<<"Output: false";
    }
    return 0;
}