/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode * t1 = head1;
    SinglyLinkedListNode * t2 = head2; 
    int count1 = 0;
    while(t1!=NULL) {
        t1 = t1->next;
        count1++;
    }
    t1 = head1;    
    int count2 = 0;
    while(t2!=NULL) {
        t2 = t2->next;
        count2++;
    }
    t2 = head2;
    int n = 0;
    if(count1 < count2) {
        n = count2-count1;
        while(n!=0) {
            t2 = t2->next;
            n--;
        }
    } else {
        n = count1-count2;
        while(n!=0){
            t1 = t1->next;
            n--;
        }
    }
    while((t1!=NULL) & (t2!=NULL)) {
        if(t1 == t2)
            break;
        t1=t1->next;
        t2=t2->next;
    }
    return t1->data;
}
