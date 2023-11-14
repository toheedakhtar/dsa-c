#include<stdio.h>
#include<stdlib.h>

typedef struct linknode{
    int data;
    struct linknode *next;
}node;

node *start, *temp;

void create_node(){
    if(start == NULL){
        temp = (node *)malloc(sizeof(node *));
        scanf("%d", &temp->data);
        temp->next = NULL;

        if(start = NULL){
            start->temp;
            start = temp;
        }
    }

}

int main(){
    
    return 0;

};