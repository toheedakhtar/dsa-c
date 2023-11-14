//reverse array using stack
#include<stdio.h>
#include<string.h>

int push(int n);
int pop(int n);
int traverse();

int stack[10];
int top=-1;
int x = 0;
int arr[5] = {1,2,3,4,5};
int arr2[5];


int main(){
    

    for(int i = 5; i > 0; i--){
        // printf("%d", i);
        push(i);
        pop(i);

    }
    traverse();

    return 0;

};

int push(int n){
    if(top ==  5-1 ){
        printf("Overflow\n");
        return 0;
    }
    else{
    top++;
    stack[top] = n;
    }
}

int pop(int n){
    // top--;
    arr2[x] = n;
    x++;
    
}

int traverse(){

    for(int i = top; i>=0; i--){
        printf("%d", stack[i]);

    }
    printf("\n");

}