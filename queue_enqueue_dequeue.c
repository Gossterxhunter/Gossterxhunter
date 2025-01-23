#include <stdio.h>
#define MAX 51
//insertion
int Enqueue(int queue[], int *front, int *rear, int value) {
    if (*rear == MAX - 1) {
        printf("Queue is full\n");
        return 0;
    } else {
        if (*front == -1) {
            *front = 0;
        }
        *rear = *rear + 1;
        queue[*rear] = value;
        return 1;
    }
}
//deletion
int Dequeue(int queue[], int *front, int *rear) {
    if (*front == -1 || *front > *rear ) {

        printf("Queue is empty\n"); //is empty
        return 0;
    } else {
        printf("Value deleted is: %d\n", queue[*front]);
        *front = *front + 1;
        if (*front > *rear) {
            *front = *rear = -1;
        }
        return 1;
    }
}
//display
void display(int queue[], int front, int rear) {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

//main

int main() {
    int queue[MAX];

    int front = -1, rear = -1;
        
    int value;
    
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    
    if (Enqueue(queue, &front, &rear, value)) {

    printf("Value inserted successfully\n");

    }
        
     Dequeue(queue, &front, &rear);

    display(queue, front, rear);



    return 0;
}
