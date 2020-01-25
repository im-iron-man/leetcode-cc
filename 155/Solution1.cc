class MinStack {
public:
    stack<pair<int, int>> minstack;
    
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if (minstack.empty()) {
            minstack.push({x, x});
        } else {
            pair<int, int> top = minstack.top();
            minstack.push({x, x < top.second ? x : top.second});
        }
    }
    
    void pop() {
        minstack.pop();
    }
    
    int top() {
        pair<int, int> top = minstack.top();
        return top.first;
    }
    
    int getMin() {
        pair<int, int> top = minstack.top();
        return top.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */