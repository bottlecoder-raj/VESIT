#include <stdio.h>

#define MAX 10  // Maximum number of vertices

int queue[MAX], front = -1, rear = -1;
int graph[MAX][MAX], visited[MAX], total;

// Enqueue function
void enqueue(int vertex) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;  // First element
    queue[++rear] = vertex;  // Add to queue
}

// Dequeue function
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front++];  // Remove from queue
}

// BFS Traversal function
void BFS(int startVertex) {
    int i;

    visited[startVertex] = 1;
    enqueue(startVertex);

    printf("BFS Traversal starting from vertex %d: ", startVertex);

    while (front <= rear) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        // Visit all adjacent vertices
        for (i = 0; i < total; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

// Main function
int main() {
    int i, j, startVertex;

    printf("Enter the total number of vertices: ");
    scanf("%d", &total);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize visited array
    for (i = 0; i < total; i++) {
        visited[i] = 0;
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    BFS(startVertex);

    return 0;
}
