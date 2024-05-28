#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) { 
    stack->top = -1; 
}

int isEmpty(Stack *stack) { 
    return stack->top == -1; 
}

int isFull(Stack *stack) { 
    return stack->top == MAX_SIZE - 1; 
}

void push(Stack *stack, int value) { 
    if (!isFull(stack)) 
        stack->items[++stack->top] = value; 
}

int pop(Stack *stack) { 
    if (!isEmpty(stack)) 
        return stack->items[stack->top--]; 
    exit(EXIT_FAILURE); 
}

int peek(Stack *stack) { 
    if (!isEmpty(stack)) 
        return stack->items[stack->top]; 
    exit(EXIT_FAILURE); 
}

int main() {
    Stack stack; 
    initialize(&stack);
    push(&stack, 10); 
    push(&stack, 20); 
    push(&stack, 30);

    printf("Elemento no topo: %d\n", peek(&stack)); 
    printf("Elementos removidos: %d, %d\n", pop(&stack), pop(&stack));
    printf("Elemento no topo: %d\n", peek(&stack));

    return 0;
}
