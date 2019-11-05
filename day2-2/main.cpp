#include <bits/stdc++.h>
#include <vector>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>stack;
    int min = INT32_MAX;
    MinStack() {

    }
    
    void push(int x) {
        stack.insert(stack.end(),x);
        if(x<min)
        {
            min = x;
        }
    }
    void pop() {
        int end = *(stack.end()-1);
        stack.pop_back();
        if(end == min)
        {
            int temp = INT32_MAX;
            for(auto i = stack.begin();i!=stack.end();i++)
            {
                if(*i<temp)
                    temp = *i;
            }
            min = temp;
        }
    }
    
    int top() {
        return *(stack.end()-1);
    }
    
    int getMin() {
        return min;
    }
};
int main()
{
    MinStack *minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    minStack->getMin();
    minStack->pop();
    minStack->top();
    minStack->getMin();
}