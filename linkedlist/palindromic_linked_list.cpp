node* reverseLinkedList(node* head){
    node *current = head;
    node *next = NULL, *prev = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
bool check_palindrome(node* head)
{
    int len = 0;
    node *temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    int i=1;
    temp = head;
    node *temp2 = head;
    if(len%2==0){
        while(i<len/2){
            i++;
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = NULL;
    }else{
        while(i<=len/2){
            i++;
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = NULL;
    }
    node *reverse = reverseLinkedList(temp2);
    while(head!=NULL&&reverse!=NULL){
        if(head->data !=reverse->data)
            return false;
        head = head->next;
        reverse = reverse->next;
    }
    return true;
}
