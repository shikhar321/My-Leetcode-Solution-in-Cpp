class MinStack {
public:
    stack<int> s;
    map<int, int> mp;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        mp[val]++;
    }
    
    void pop() {
        int removed = s.top();
        s.pop();
        mp[removed]--;
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int smallest = 0;
        for(auto it: mp) {
            if(it.second != 0) {
                smallest =  it.first;
                break;
            }
        }
        return smallest;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */