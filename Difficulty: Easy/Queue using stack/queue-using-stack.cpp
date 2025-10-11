class myQueue {
    private: 
    stack<int> s1, s2 ;

  public:
    myQueue() {
        // Initialize your data members
        
    }

    void enqueue(int x) {
        // Implement enqueue operation
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        
    }

    void dequeue() {
        // Implement dequeue operation
      
         if(!s1.empty()) s1.pop();
    }

    int front() {
        // Implement front operation
        if(s1.empty()){
            return -1;
            
        }
        return s1.top(); 
    }

    int size() {
        // Implement size operatio
        return s1.size();
    }
};
