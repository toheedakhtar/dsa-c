#include<stdio.h>
#include<stdlib.h>
// #include<string.h>

typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *start, *temp, *rear, *x, *z;
node *y;

void create_list(){

    temp = (node*)malloc(sizeof(node));
    printf("Enter new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL){
        start = temp;
        rear = start;
    }
    else{
        rear->next = temp;  // O(1)
        rear = temp;
    // while(ptr->next!=NULL){  // O(n)
    //     ptr=ptr->next;
    //     ptr->next = temp;
    // }
    }
}

void double_node(){
    int count = 0;
    int n = 0;
    printf("Enter nth: ");
    scanf("%d", &n);

    temp =start;
    while(temp != NULL){
        count++;
        if(count == n){
            temp->data = 2*temp->data;
        }
        temp = temp->next;
    }

    if(n>count){
        printf("invlalid\n");
    }
    count = 0;
}


void display(){
    if(start == NULL){
        printf("Underflow\n");
    }
    else{
        temp = start;


        while(temp != NULL){
            
            printf("\n%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void reverse_node(){

    rear = start;
    x = start;
    y = x->next;
    z = y->next;
    x->next = NULL;

    while(y->next != NULL){

        y->next = x;
        x=y;
        y=z;
        z= z->next; 
  
    }

    printf("\nReversing linked list...\n");
    printf("%d", y->data);    
    start = x;
    display();
    printf("\n");


}

int main(){

    int ch = 0;

    while(1){
        printf("1. Add 2. Display 3.Double nth node 4.Reverse\n");

        scanf("%d", &ch);
        switch(ch){
            case 1:
                create_list();
                break;
                return 0;
            case 2:
                display();
                break;
                return 0;
            case 3:
                double_node();
                break;
                return 0;
            case 4:
                reverse_node();
                break;
                return 0;
            default: 
                printf("Invalid Option\n");
                break;
            
        return 0;
        }
    }

    return 0;

};
