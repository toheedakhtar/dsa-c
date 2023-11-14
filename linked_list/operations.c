// Insertion at various positions.

#include<stdio.h>
#include<stdlib.h> 

typedef struct linknode{
    int data;
    struct linknode *next;
}node;

node *start, *rear, *temp;
int count = 0;


void create_node(){
    temp = (node *)malloc(sizeof(node *));
    printf("Enter new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

void insert_first(){
    create_node();
    count ++;
    if(start == NULL){
        start = temp;
        rear = temp;
    }
    else{
        start->next = temp;
        start = temp;
    }
}

void insert_last(){
    create_node();
    count++;
    rear->next = temp;
    rear = temp;    

}

void insert_mid(){
    int pos = 0;

    printf("\nEnter at which position do you want to insert: ");
    scanf("%d", &pos);

    if(pos == 1){
        insert_first();
    }
    else if(pos == count){
        insert_last();
    }

}

void display(){
    if(start == NULL){
        printf("Empty\n");
    }
    else{
        temp = rear;
        while(temp != NULL){
            printf("%d\n", temp->data);
            temp = temp->next;
        }

    }
}

int main(){
    int opr =0;


    while(1){
    printf("\nEnter which operations do you want to perform: \n1.Insert at start\n2.Insert at end\n3.Insert at mid\n");
    scanf("%d", &opr);
        switch(opr){
            case 1:
                insert_first();
                break;
            case 2:
                insert_last();
                break;
            case 3:
                insert_mid();
                break;
            case 4:
                display();
                break;
        }
    }

}

