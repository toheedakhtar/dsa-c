#include<stdio.h>
#include<ctype.h>
#include<string.h>

int top = -1;
char stack[50];

int precedence(char);
void push(char);
char pop();

int main(){
    
    char exp[50] = "x^y/(a*z)+b"; char x;
    for(int i =0; exp[i]!='\0'; i++){
        if(isalpha(exp[i])){
            printf("%c", exp[i]);
        }
        else if(exp[i] == '('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            while(x = pop(exp[i]) != '('){
                printf("%c", x);
            }
        }
        else{
            while(precedence(stack[top]>=precedence(exp[i]) )){
                printf("%c", pop());
            }
            push(exp[i]);
        }
    }
    while(top>-1){
        printf("%c", pop());
    }

    return 0;

};

int precedence(char opertor){

    if (opertor == '^'){
        return 3;
    }
    else if(opertor == '*' || opertor == '/'){
        return 2;
    }
    else if(opertor == '+' || opertor == '-')
    {
        return 1;
    }
    else{return 0;}
}

void push(char a){
    stack[++top] = a; 
}

char pop(){
    return stack[top--];
}