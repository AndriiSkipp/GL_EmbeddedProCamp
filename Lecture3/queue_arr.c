#include <stdio.h>

#define MaxSize 10
/*queue library based on array*/


int que_arr[MaxSize];
int front = -1;
int rear = -1;
int size = -1;

void put(int val){
    if(size < MaxSize){ // overfull check
        if(size < 0){ // first time initialising (size == -1)
            que_arr[0] = val; // place first element
            front = rear = 0; // front and rear point at the same element
            size = 1; // new size, has first element
        }
        else if(rear == MaxSize - 1){//every time if "rear" at the end of arr => reset "rear" counter 
            que_arr[0] = val; // fill start of array
            rear = 0; // reset "rear"
            size++; // rescently added new element, size counter incremented 
        }
        else{ // if not overfull and not end of array, we have ordinary increment of size 
            que_arr[rear + 1] = val;
            rear++; // and rear move ahead
            size++;
        }
    }
    else{
        printf("Queue is full\n");
    }
}

void get(int *val){ //
	if(size > 0){  // check "is empty"
		if(front == MaxSize - 1){ //every time if "front" at the end of arr => reset "front" counter
			*val = que_arr[front]; // save user data over pointer
			front = 0; // variable "front" reseted
			size--;
			}// decrease size array of values - user got one element
		else {
			*val = que_arr[front]; // save user data over pointer
			front++;     // if we in other place in the array, ordinary move ahead "front"
			size--;
		}
	}
	else{
	printf("Queue is empty\n");
	}	
}	
		

void read(int *val){ //  reading is similal to getting but without any changes in "front' and "size"
	if(size > 0){
		*val = que_arr[front];
		}
	else{
	printf("Queue is empty\n");
	}
}
   

void prn_arr(){ // displaing current condition of queue
    int i;
    if(size > 0){
        if(rear >= front){ // out from "front" to "rear" if order is: "front||||||rear..."
            for(i=front;i<=rear;i++){
            printf("%d\n",que_arr[i]);
            }
        }
        else{					// if front > rear, means order is: "|||rear...front|||"
            for(i=front; i<MaxSize;i++){ // we must print two half of array: from "front" to end of array
                printf("%d\n",que_arr[i]);
            }
            for(i=0;i<=rear; i++){ //  than from start to "rear"
                printf("%d\n", que_arr[i]);
            }
        }
    }
    	else{
	printf("Queue is empty\n");
	}	
}


int main(void){
    int val;
    int i = 3;
    for(val = 0; val <= MaxSize-1; val++ ){ // filling the queue 
       put(val * 2);
     }
    printf("source queue on array:\n");
    prn_arr();
    printf("\n");
    printf("getting 3 first values...\n");
    while(i){
    get(&val);
    printf("get %d \n", val);
    i--;
    }
    printf("\n check queue :\n");
    prn_arr();
    printf("\nreading value...\n");
    read(&val);
    printf("read %d \n", val);
    printf("\n check queue:\n");
    prn_arr();
   
   return 0;
}



