#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Max number of vertices in the graph

// Stack structure
struct Stack {
    int top;
    int items[MAX];
};

// Initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Push element into the stack
void push(struct Stack* stack, int value) {
    if (stack->top < MAX - 1) {
        stack->items[++(stack->top)] = value;
    } else {
        printf("Stack Overflow!\n");
    }
}

// Pop element from the stack
int pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->items[(stack->top)--];
    }
    return -1;  // Return -1 if stack is empty
}

// DFS function using stack
void DFS(int graph[MAX][MAX], int start, int numVertices) {
    struct Stack stack;
    initStack(&stack);

    int visited[MAX] = {0}; // Visited array to mark visited nodes

    push(&stack, start);
    visited[start] = 1;

    printf("DFS Traversal starting from vertex %d: ", start);

    while (!isEmpty(&stack)) {
        int currentVertex = pop(&stack);
        printf("%d ", currentVertex);

        // Explore adjacent vertices
        for (int i = 0; i < numVertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                push(&stack, i);
                visited[i] = 1;
            }
        }
    }

    printf("\n");
}

int main() {
    int numVertices, startVertex;

    printf("Enter the number of vertices in the graph (max %d): ", MAX);
    scanf("%d", &numVertices);

    if (numVertices > MAX || numVertices <= 0) {
        printf("Number of vertices must be between 1 and %d\n", MAX);
        return 1;
    }

    int graph[MAX][MAX];

    printf("Enter the adjacency matrix of the graph:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex (0 to %d): ", numVertices - 1);
    scanf("%d", &startVertex);

    if (startVertex < 0 || startVertex >= numVertices) {
        printf("Invalid starting vertex.\n");
        return 1;
    }

    DFS(graph, startVertex, numVertices);

    return 0;
}
