#include <bits/stdc++.h>
#include <stack>
#include <stack>
using namespace std;
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> stack_1;
    stack<int> stack_2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack_1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(stack_2.empty())
        {
            while(!stack_1.empty())
            {
                stack_2.push(stack_1.top());
                stack_1.pop();
            }
        }
        if(stack_2.empty())
            return NULL;
        else{
            int re = stack_2.top();
            stack_2.pop();
            return re;
        }
    }
    
    /** Get the front element. */
    int peek() {
        if(stack_2.empty())
        {
            while(!stack_1.empty())
            {
                stack_2.push(stack_1.top());
                stack_1.pop();
            }
        }
        if(stack_2.empty())
            return NULL;
        else{
            int re = stack_2.top();
            return re;
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(stack_1.empty() && stack_2.empty())
            return true;
        else
            return false;
    }
};