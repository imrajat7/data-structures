public class SinglyLinkedList 
{
  //---------------- nested Node class ----------------
  /**
   * Node of a singly linked list, which stores a reference to its
   * element and to the subsequent node in the list (or null if this
   * is the last node).
   */

  private static class Node 
  {
    /** The element stored at this node */
    private int element;            // reference to the element stored at this node

    /** A reference to the subsequent node in the list */
    private Node next;         // reference to the subsequent node in the list

    /**
     * Creates a node with the given element and next node.
     *
     * @param e  the element to be stored
     * @param n  reference to a node that should follow the new node
     */
    public Node(int e, Node n) 
    {
      element = e;
      next  = n;
    }

    // Accessor methods
    /**
     * Returns the element stored at the node.
     * @return the element stored at the node
     */
    public int getElement() 
    { 
      return this.element;
    }

    /**
     * Returns the node that follows this one (or null if no such node).
     * @return the following node
     */
    public Node getNext() 
    { 
      return this.next;
    }

    // Modifier methods
    /**
     * Sets the node's next reference to point to Node n.
     * @param n    the node that should follow this one
     */
    public void setNext(Node n) 
    { 
      next = n;
    }
  } //----------- end of nested Node class -----------


  // instance variables of the SinglyLinkedList
  /** The head node of the list */

  private Node head = null;               // head node of the list (or null if empty)

  /** The last node of the list */
  private Node tail = null;               // last node of the list (or null if empty)


  /** Number of nodes in the list */
  private int size = 0;                      // number of nodes in the list


  /** Constructs an initially empty list. */
  public SinglyLinkedList() { }              // constructs an initially empty list


  // access methods
  /**
   * Returns the number of elements in the linked list.
   * @return number of elements in the linked list
   */
  public int size() 
  {  
    return size;
  }


  /**
   * Tests whether the linked list is empty.
   * @return true if the linked list is empty, false otherwise
   */
  public boolean isEmpty() 
  { 
    return size == 0;
  }

  /**
   * Returns (but does not remove) the first element of the list
   * @return element at the front of the list (or null if empty)
   */
  public int first()
  {
    return isEmpty() ? null : head.getElement();
                 // returns (but does not remove) the first element
  }

  /**
   * Returns (but does not remove) the last element of the list.
   * @return element at the end of the list (or null if empty)
   */
  public int last() 
  {              // returns (but does not remove) the last element
    return isEmpty() ? null : tail.getElement();
  }

  // update methods
  /**
   * Adds an element to the front of the list.
   * @param e  the new element to add
   */
  public void addFirst(int e) 
  {                // adds element e to the front of the list
    head = new Node(e, head);
    size++;
  }

  /**
   * Adds an element to the end of the list.
   * @param e  the new element to add
   */
  public void addLast(int e) 
  {                 // adds element e to the end of the list
    Node temp = new Node(e, null);
    if(isEmpty())
     head = temp;
    else 
    tail.setNext(temp);
    tail = temp;
    size++;
  }

  /**
   * Removes and returns the first element of the list.
   * @return the removed element (or null if empty)
   */
  public int removeFirst() 
  {                   // removes and returns the first element
    int temp = head.getElement();
    if(isEmpty())
     return 0;
     else {
        head = head.getNext();
        size--;
        if(size == 0) tail = null;
        return temp;
     }
  }


  /**
   * Produces a string representation of the contents of the list.
   * This exists for debugging purposes only.
   */
  public String toString() 
  {
    StringBuilder builder = new StringBuilder("{");
    Node tempVar = head;
    while(tempVar != null) {
      builder.append(tempVar.getElement());
      builder.append(" ");
      tempVar = tempVar.getNext();
    }
    builder.append("}");
    return builder.toString();
  }
}
