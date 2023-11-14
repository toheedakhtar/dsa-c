#include<stdio.h>
#include<string.h>

char stack[50] = "{(a+b)*c}";
int top = -1;
int x = 0;

void push(char);
char pop();

int main(){

    for(int i =0; stack[i]!='\0'; i++){

        if(stack[i]=='(' || stack[i]=='{' || stack[i]=='['){
            push(stack[i]);
        }
        else if(stack[i]==')' || stack[i]=='}' || stack[i]==']'){
            if(top == -1){
                x=1;
            }
            else{
                char var = pop();
                if(var == '(' && stack[i] != ')'){
                    x=1;
                }
                if(var == '{' && stack[i] != '}'){
                    x=1;
                }
                if(var == '[' && stack[i] != ']'){
                    x=1;
                }
            }
        }
    }
    printf("%d", x);
    printf("%d", top);


    if((x==1) && (top == -1)){
        printf("Unbalanaced\n");
    }
    else{
        printf("Balanaced\n");
    }


    return 0;

}

void push(char a){
    if(top==49){
        printf("overflow\n");
    }
    else{
        top++;
        stack[top] = a;
    }
}

char pop(){
    if (top == -1){
        printf("underlow\n");
    }
    else{
        top--;
        return stack[top];
    }
}