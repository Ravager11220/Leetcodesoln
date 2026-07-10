class MinStack {
private:
    struct Node {
        int val;
        int min_val;
        Node* next;
        
        Node(int v, int m, Node* n) : val(v), min_val(m), next(n) {}
    };
    
    Node* head;

public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        if (head == nullptr) {
            // If stack is empty, this element is automatically the minimum
            head = new Node(val, val, nullptr);
        } else {
            // The new minimum is the lesser of the current val and the previous min
            int current_min = std::min(val, head->min_val);
            head = new Node(val, current_min, head);
        }
    }
    
    void pop() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->min_val; // Instant O(1) lookup!
    }
    
    // Destructor to clean up memory and prevent leaks
    ~MinStack() {
        while (head != nullptr) {
            pop();
        }
    }
};
