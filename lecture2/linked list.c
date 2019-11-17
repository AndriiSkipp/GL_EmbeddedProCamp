#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    int value;  // variable for inteteger
    struct node *next; //   pointer to next node
    } Node; // structure variable, has 2 fields of "struct node"
	
void ListAdd(Node **head, int data) { // placing new element between head and tail 
    Node *tmp = (Node*) malloc(sizeof(Node)); // prepare spase for one node
    tmp -> value = data ;  // fill "tmp.data" field 
    tmp -> next = (*head); // copy current adress from current pointer "head" to "tmp.next"
    (*head) = tmp; // save of pointer "tmp" to poiner "head", then "tmp" will be lost
    // Now the head points to rescently created node, node has addr of "next" - prev. of head
} 

int DelLast(Node **head) { //  remove last inputed node
    Node* prev = NULL; //create temporary node pointer for store address of last added node
    int val;
    if (head == NULL) { // check if not end of the list
        exit (-1);  //  if addr of hed == 0
    }
    prev = (*head);  // save addr of last added node
    val = prev->value;  //  save value of last added node
    (*head) = (*head)->next; // copy to "head" addr of next to last added node  
    free(prev); // free memory - addr of last added node
    return val; // pass value of deleted node
}

Node* NodeIs(Node* head, int n) { // output selected node data, if is present
    int counter = 0; 
    while (counter < n) {  //   counter for steps, when moving head->next
        head = head->next; 
        if(head == 0){ // if input number is biggest than list 
            printf("Not found. End of Linked List achieved!\n");
            exit (-2);
        }
        counter++;
    }
    printf("%d \n", (head->value)); // curent value
    return 0;
}

   
void ListRemove(Node **head) { // Full removing of Linked List, used pop process  in cycle to end
    Node* prev = NULL;  // pointer to store address. If we lost addr, we can`t "free" memory for node.
    while ((*head)->next) { // if (sentence) == NULL, all nodes are deleted, memory free
        prev = (*head); // copy addr from "head" to temporary "prev" - it must have the same type as head
        (*head) = (*head)->next; // take the next addr to head
        free(prev); // do "free" for node has addr, stored in "prev"
    }
    free(*head); // separately free for head pointer
    printf("Done");
}


void printLList(const Node *head, int flg1) { // Printing whole Linked List on screen
    while (head) {
        printf("%d ", head->value); // out current value
        head = head->next; 
        if (flg1){ // swtch on for printing of addresses of "next" fields
        printf("%p \n", head);
        }
    }
    printf("\n");
}

int main()
{
    Node* head = NULL; // created struct pointer to NULL 
    int sz, scan, loop, flg1, flg2 = 1; // sz - size of list, scan - temp 4 keyb, loop - counter, flg1 - print addr  
    printf("quantity of elements?\n");
    scanf("%d", &sz);
    if(sz <= 0){
        printf("Nothing to create, sorry");
        return 1;
    }
    	printf("input new integer elements:\n");
    loop = sz;
    while(loop){
        printf("%d - ", (sz - loop + 1));
        scanf("%d", &scan);
        ListAdd(&head, scan); //  pass addr of head and data from user to push 
        loop-- ;
    }
    printf("stored at FILO elements with pointer address:\n");
    printLList(head, 1); // flag 1 == with addr printing, 0 == w\o addr
    
    printf("deliting last passed node with data:\n %d\nnow FILO list has next nodes:\n", DelLast(&head));
    printLList(head, 0);// flag 1 == with addr printing, 0 == w\o addr
    if (head == NULL) {
        printf("it was the last of existing node");
        return 2;
    }
    printf("input number of node need to check (FILO)\n");
    scanf("%d", &scan);
    printf("node %d contain data:\n", scan);
    NodeIs(head, (scan-1));// printing of selected node. "scan" - number in the stack
    printf("Deleting whole list from heap... ");
    ListRemove(&head); // full list removing 
    return 0;
    }
  