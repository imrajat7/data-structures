template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    void push(T element) {
        Node<T> *newNode = new Node<T>(element);
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
    
    T pop() {

        if(size==0){
            return 0;
        }else{
            Node<T> *temp = head;
            int ans = temp->data;
            head = head->next;
            delete temp;
            size--;
            return ans;
        }
    }
    
    T top() {

        if(size==0){
            return 0;
        }else{
            return head->data;
        }
    }
    
};
