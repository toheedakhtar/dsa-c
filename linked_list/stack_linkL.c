#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top, *temp, *head;



void push(){

    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter element: ");
    scanf("%d", &temp->data);
    temp->next = top;
    top = temp;

}

void pop(){
    if(top == NULL){
        printf("Underflow\n");
    }
    else{
        temp  = top;
        top = top->next;
        printf("removing %d\n", temp->data);
        free(temp);
        temp = NULL;
    }
}

void peek(){
    if(top == NULL){
        printf("Underflow\n");
    }
    else{
        printf("Element at top is %d\n", top->data);
    }  
    
}

void display(){
    if(top == NULL){
        printf("\nEMPTY");
    }
    temp = top;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){

    
    int opr = 0;


    while(1){
        printf("\nEnter Opr you want to perform\n1.Push 2.Pop 3.Peek 4.Display\n");
        scanf("%d", &opr);

        switch(opr){

            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;


        }

    }



    return 0;

};