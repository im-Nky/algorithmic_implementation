void reversePrint(SinglyLinkedListNode* head) {
    if(head!=NULL) {
        reversePrint(head->next);
        cout<< head->data <<endl;
    } 
}
