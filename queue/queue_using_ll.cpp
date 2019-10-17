template<typename T>

class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

class Queue {
    Node<T> *head;
    Node<T> *tail;
    T size;
    public :
    
    
    Queue() {
        head = NULL;
        tail = NULL;
        size=0;
    }
    
    void enqueue(T data) {
        Node<T> *newNode = new Node<T>(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    T dequeue() {
        // Return 0 if queue is empty
        if(size==0||head==NULL){
            return 0;
        }
        Node<T> *temp = head;
        int ans = temp->data;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    
    T front()  {
        // Return 0 if queue is empty
        if(size==0||head==NULL){
            return 0;
        }
        return head->data;
    }
};
