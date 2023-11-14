//reverse stack using c
#include<stdio.h>
#include<string.h>

int push(int n);
int traverse();

int stack[50] ={1,2,3,4,5};
int stack2[5];
int top=-1;

int main(){
    

    for(int stack[i] = 0; stack[i] <5; i--){
        push(stack[i]);

    }
    traverse();

    return 0;

};

int push(int n){
    top++;
    // scanf("%d", &stack[top]);
    stack2[top] = n;
}

int traverse(){

    for(int i = top; i>=0; i--){
        printf("%d", stack2[i]);

    }
    printf("\n");

}