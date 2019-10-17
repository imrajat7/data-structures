void printMiddle(Node *head)  
{  
    Node *slow_ptr = head;  
    Node *fast_ptr = head;  
  
    if (head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;  
        }  
        cout<<"The middle element is "<<slow_ptr->data;  
    }  
}  
  
