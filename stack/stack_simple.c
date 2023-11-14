#include<Stdio.h>

int check(top){
    if (top==-1){
        printf("underflow");
        return 0;
    }
    else if(top==4){
        printf("overflow");
        return 0;
    }
}

int main(){

    int stack[5] = {1,2,3};
    int top = -1;
    
    //push
    int n = 0;
    scanf("%d", &n);
    // if(check(top) != 0){
    //     stack[5] == n;
    //     top++;
    // }


}

