#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}queue;

queue *front, *rear, *temp;

void enqueue(){
    temp = (queue *)malloc(sizeof(queue*));
    printf("Enter Element to insert: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(front == NULL){
    front = temp;
    rear = temp;
    }
    else{
        rear->next = temp;
        rear = rear->next;
    }
}

void dequeue(){
    if(front == NULL){
        printf("empty\n");
    }
    else{
        temp = front;
        printf("Removing %d\n", temp->data);
        front = front->next;
        free(temp);
        temp = NULL;
    }
}


void display(){
    if(front == NULL){
        printf("empty\n");
    }
    else{
        temp = front;
        printf("\n");
        while(temp != NULL){
            printf("%d\n", temp->data);
            temp= temp->next;
        }
    }

}


int main(){

    
    int opr = 0;


    while(1){
        printf("\nEnter Opr you want to perform\n1.Enqueue 2.Dequeue 3.Display\n");
        scanf("%d", &opr);

        switch(opr){

            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;


        }

    }   


    return 0;

};