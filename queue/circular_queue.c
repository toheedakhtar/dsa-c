//circular queue
#include <stdio.h>
#define MAX 5

int enqueue();
int dequeue();
void display();
int rear, front = -1;
int queue[MAX];


int main(){
    int ch = 0;
    while(1){
    printf("\nEnter Opr. to perform on queue :\n1.Insert\n2.Delete\n3.Display\n\n");
    scanf("%d", &ch);

        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                return 0;
        }
    }
}


int enqueue(){
    if(rear + 1 == MAX-1 ){
        printf("Overflow\n");
    }
    else if (front==-1){
        front++;
        printf("Enter element: ");
        scanf("%d", &queue[front]);
    }
    else{
        rear = (rear+1) % MAX;
        printf("Enter element: ");
        scanf("%d", &queue[rear]);
    }
    return 0;

}

int dequeue(){
    if(rear == -1 || front == rear+1 ){
        printf("Underflow\n");
    }
    else if(front == rear){
        rear = -1;
    }
    else{
        printf("removed %d\n", queue[rear]);   
        front = (front + 1 )% MAX; 
    }
    return 0;
}

void display(){
    
    for(int i = front; front != rear-1; front=(front+1)){
        printf("%d ", i);
    }

    // printf(" %d %d %d ", queue[0], queue[1], queue[2]);

// 
}