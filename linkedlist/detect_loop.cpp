int detectloop(Node* list)
{
    Node *slow_pointer = list, *fast_pointer = list;

    while (slow_pointer && fast_pointer && fast_pointer->next) {
        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;
        if (slow_pointer == fast_pointer) {
            cout << "Found Loop";
            return 1;
        }
    }
    return 0;
}

