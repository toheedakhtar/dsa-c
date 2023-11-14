#include <stdio.h>
#define MAX 5

int rear, front = -1;
int queue[MAX];

int fenqueue();
int renqueue();
int fdequeue();
int rdequeue();

int main() {
    int opt;

    while (1) {
        printf("\nChoose: \n1. Front Enqueue\n2. Rear Enqueue\n3. Front Dequeue\n4. Rear Dequeue\n0. Exit\n");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                fenqueue();
                break;
            case 2:
                renqueue();
                break;
            case 3:
                fdequeue();
                break;
            case 4:
                rdequeue();
                break;
            default:
                printf("Invalid option\n");
                return 0;
        }
    }

    return 0;
}

int renqueue() {
    if (rear == MAX - 1) {
        printf("Overflow\n");
    } else {
        printf("Enter the number you want to insert: ");
        rear += 1;
        scanf("%d", &queue[rear]);
    }
}

int fenqueue() {
    if (front == 0) {
        printf("Cant be added at front\n");
    } else {
        printf("Enter the number you want to insert: ");
        if (front == -1) {
            front = rear = 0;
        } else {
            front = front - 1;
        }
        scanf("%d", &queue[front]);
    }
}

int fdequeue() {
    if (front == -1) {
        printf("Underflow\n");
    } else {
        printf("Removed: %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = front + 1;
        }
    }
}

int rdequeue() {
    if (rear == -1) {
        printf("Underflow\n");
    } else {
        printf("Removed: %d\n", queue[rear]);
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = rear - 1;
        }
    }
}
