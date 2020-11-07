/*Kth Elemenet from Last in Linkedlist*/

// Iterative approach

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int index = 0;
    SinglyLinkedListNode * current = head;
    SinglyLinkedListNode * result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
    

// Recursive Approach
int counter=0;
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    //static int counter = 0;  /*When global variable is not allowed use local static */
    if(head!=NULL) {
        getNode(head->next,positionFromTail);
        counter = counter+1;
        if((counter-1) == positionFromTail)
            val = head->data;
    }
    return val;
}

    
