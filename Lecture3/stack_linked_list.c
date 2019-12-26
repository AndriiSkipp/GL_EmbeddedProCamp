

#include <stdio.h>
#include <stdlib.h>


/*stack library based on linked list*/


typedef struct nodeStr{ // structure has 2 fields: user data "val" and "next" address
    int val;
    struct nodeStr *next; 
} Node;

void push(Node **head, int data){ // placing new element between head and tail
    Node *tmp = (Node *) malloc(sizeof(Node)); // prepare spase for node
    tmp->val = data; //  copy user data to val field in tmp structure
    tmp->next = (*head); // copy address from head to tmp.next
    (*head) = tmp;  // copy address of tmp to head
}

void pop(Node **head, int *data){ // read and errace last added node
    Node *prev = NULL; //  prepare temporary pointer
    if(head == NULL){ // if we try pop when stack is emty
        exit(-1);
    }
    prev = (*head); //  pointer "head" contain address of last added node, 
    *data = prev->val; // save directly of user data
    (*head) = (*head)->next; // now head points to next node
    free(prev);
}

void read(Node **head, int *data){ // read the last of added user data 
    *data = (*head)->val; // head always points to last added node
}

void display(Node *head){
	int tmp;
	printf("The stack on LinkedList contain:\n");
	while (head){ // if not the end of nodes chain
	   printf("%d   ", head->val);  //to show current value
       head = head->next; // move to ne[t node]
    }
    printf("\n\n");
}

int main(void){
   Node *head = NULL;
   int data, i;
   for(i=1; i < 11; i++){ // fill of stack
       push(&head, i*2);
   }
    display(head);
    pop(&head, &data); //    pop 3 times with out on screen popped data
    printf("pop  %d\n", data);
    pop(&head, &data);
    printf("pop  %d\n\n", data);
    display(head);
    read(&head, &data); // read - without deleting of read data
    printf("read  %d\n\n", data);
    display(head);
    pop(&head, &data); // pop once more time
    printf("pop  %d\n", data);
    display(head);

    return 0;
}
