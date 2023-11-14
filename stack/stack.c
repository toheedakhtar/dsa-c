// Stack is LIFO OR FILO 
// has underflow condition if top == -1
// has overflow condition if top == n-1  (n = size of array)
// pop, push, traverse, peak opr can be done.
// pop is deletion, push os insertion, peak is getting value of top element and traversing is printing array

#include <stdio.h>

int top = -1;
int n = 0;
int stack[5];
int push();
int pop();
int peak();
int traverse();



int main(){


    int option = 0;

    while(1){

    printf("Choose options for stack: 1 - Push, 2 - Pop, 3 - Peak, 4 - Traverse, 5 - Exit\n");
    scanf("%d", &option);

    switch(option){
    case 1:
        push();
        break;

        case 2:
            pop();
            break;

        case 3:
            peak();
            break;

        case 4:
            traverse();
            break;
        
        default:
            return 0;
            break;
        }

    }
}

int push(){
    if(top == 4){
        printf("Overflow\n");
        return 0;
    }
    else{
    top++;
    printf("Enter no you want to add in stack: ");
    scanf("%d", &stack[top]);
    return 0;
    }
}

int pop(){
    if(top == -1){
        printf("underflow\n");
        return 0;
    }
    else{
        top--;
        printf("%d", stack[top]);
        return 0;
    }

    
}

int peak(){

    printf("Top elemnet %d is at %d\n", stack[top], top);

}

int traverse(){

    for(int i = top; i>=0; i--){
        printf("%d ", stack[i]);

    }
    printf("\n");

}