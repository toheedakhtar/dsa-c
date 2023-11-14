
    stack[top] = n;
    }
}

int traverse(){

    for(int i = top; i>=0; i--){
        printf("%c", stack[i]);

    }
    printf("\n");

}