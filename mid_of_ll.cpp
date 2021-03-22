/*
  Find middle point of a linked list
1. First Method: using traverse 2 times
2. 2nd Method: Using 2 pointer 
3. Using recursion
*/

void reversePrint(SinglyLinkedListNode* head) {
    static int fcount=0;
    static int bcount=0;
    if(head!=NULL) {
        fcount++;
        reversePrint(head->next);
        bcount++;
        //cout<<"len"<<fcount<<endl;     // Debug statement
        //cout<<"back"<<bcount<<endl;
        if(bcount == (fcount/2))
            cout<< head->data <<endl;
    } 
}
