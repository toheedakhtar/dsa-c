#include <stdio.h>
#include <stdlib.h>



typedef struct knode {
    int data;
    struct node *next;
} node;

node *temp, *last;


void enqueue() {
    temp = (node*)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (last == NULL) {
        last = temp;
        last-> next = temp;
    //    temp=last->next;
     }
    else {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void dequeue() {
    if (last == NULL) {
        printf("Underflow\n");
    }
    else if (last->next == last) {
        free(last);
        last = NULL;
    }
    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}


void display(){
    if (last == NULL) {
        printf("Underflow\n");
    }
    else {
        temp = last->next;
        do{
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp!= last->next);
    }
}


int main() {
    int choice;
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice!= 4);
    return 0;
}