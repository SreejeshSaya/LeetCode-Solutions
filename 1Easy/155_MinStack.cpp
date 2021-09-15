class MinStack {
private:
    stack<pair<int, int>> s;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int val) {
        if(s.empty()) s.push({val, val});
        else s.push({ val, min(val, s.top().second) });
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
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

// O(1) Space, Runtime-Error
class MinStack {
private:
    stack<long long int> s;
    long long int minEle;
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minEle = val;
        }
        else {
           if(val<minEle) {
               s.push((long long int) 2*val - minEle);
               minEle = val;
           } 
           else s.push(val);
        }
    }
    
    void pop() {
        int t=s.top();
        s.pop();
        if(t<minEle) minEle = 2*minEle - t;
    }
    
    int top() {
        long long int t=s.top();
        return max(t, minEle);
    }
    
    int getMin() { return minEle; }
};
