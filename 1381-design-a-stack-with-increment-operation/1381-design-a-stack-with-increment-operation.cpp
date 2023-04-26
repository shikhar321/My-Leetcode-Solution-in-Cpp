class CustomStack {
vector<int> v;
public:
int maxcapacity = 0;
    CustomStack(int maxSize) {
        maxcapacity = maxSize;
    }
    
    void push(int x) {
        if(v.size() < maxcapacity) {
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size() == 0) {
            return -1;
        }
        int topmost = v[v.size()-1];
        v.erase(v.end()-1, v.end());    
        return topmost;
    }
    
    void increment(int k, int val) {
        int till = 0;
        if(val == 0) {
            return;
        }
        else{
            if(k<=v.size()) {
                till = k;
            }
            else{
                till = v.size();
            }
            for(int i = 0; i<till; i++) {
                v[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */