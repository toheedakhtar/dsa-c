#include<stdio.h>
#include<string.h>

struct number{
    int n;
    int n2;
};

int main(){
    
    struct number n1;
    struct number* sptr = &n1; // sptr points to struct number n1

    scanf("%d", &n1.n);
    printf("%d\n", n1.n); // accesing struct member using dot opr (not thorugh pointer)

    scanf("%d", &sptr->n2);
    printf("%d\n", sptr->n2); // accesing struct member using arrow opr (thorugh pointer)

    return 0;

};