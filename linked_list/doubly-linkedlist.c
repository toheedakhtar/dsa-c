#include<stdio.h>
#include<stdlib.h>

typedef struct linknode{
    int data;
    struct linknode *prev, *next;
    // struct linknode *next;
}node;

node *temp, *start, *rear, *mid;
int count = 0;

void create_node(){
    temp = (node*)malloc(sizeof(node*));
    printf("Enter element: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;

    if(start == NULL){
        start = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        temp->prev = rear;
        rear = temp;
    }

}

void insert_mid(){
    int ps = 0;
    printf("Enter pos: ");
    scanf("%d", &ps);

    if(ps > count){
        printf("not enough nodes\n");
    }
    else if(ps == count){
        
    }
    
}


void display(){

    temp = start;
    printf("\nForward display\n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }

    temp = rear;
    printf("\nReverse display\n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}

int main(){

    int ch = 0;

    while(1){
        printf("\n1.Insert at beginning 2.Display\n3.Insert at mid\n");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                create_node();
                break;
            
            case 2:
                display();
                break;

            case 3:
                insert_mid();
                break;
            default:
                printf("Invalid\n");
                break;
        }
    }

    
    return 0;

};