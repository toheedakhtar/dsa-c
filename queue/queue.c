#include<stdio.h>

#define MAX 5

int rear = -1;
int front = -1;
int queue[MAX] = {0};

void enqueue();
void dequeue();
void display();

int main(){

    int ch;
    while(1){
    printf("\nChoose options for stack: \n1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n\n");
    scanf("%d", &ch);

    switch(ch){
        case 1:
            enqueue();
            break;
            return 0;

        case 2:
            dequeue();
            break;
            return 0;


        case 3:
            display();
            break;

        default:
            break;


        }
    }
    
    return 0;

};

void enqueue(){
    if(rear == MAX){
        printf("Overflow\n");
    }
    else if (rear == -1){
        rear = 0;
        printf("Enter a num: ");
        scanf("%d", &queue[rear]);

    }
    else{
        rear++;
        printf("Enter a num: ");
        scanf("%d", &queue[rear]);

    }
}

void display(){
    for (int i = front; i<rear; i++){
        printf("%d ", queue[i]);
    }
}

void dequeue(){
    if(front == rear){
        printf("underflow\n");
    }
    else{
        rear--;
    }

}